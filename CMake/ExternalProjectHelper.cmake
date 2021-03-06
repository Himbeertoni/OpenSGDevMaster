
####################
# WARNING WARNING
#
# HIGHLY IN PROGRESS
####################

INCLUDE(OpenSGVersion)

MACRO(OSG_INIT)

  SET(BUILD_SHARED_LIBS "Set to OFF to build static libraries" ON)

  MESSAGE(STATUS "ARGS: ${ARGC} | ${ARGV} ")
  MESSAGE(STATUS "OPT : ${OSG_OPTIONAL_COMPONENTS}")

  SET(_OSG_COMPONENTS ${ARGV})

  SET(OSG_PLATFORM_64 0)
  SET(OSG_PLATFORM_32 0)
  SET(OSG_LIBDIR_SUFFIX "")

  IF(CMAKE_SIZEOF_VOID_P EQUAL 8)
    SET(OSG_PLATFORM_64 1)
    SET(OSG_LIBDIR_SUFFIX "64")
    IF(NOT WIN32)
      SET(OSG_LIBDIR_BASE_SUFFIX "64")
    ENDIF()
  ELSE()
    SET(OSG_PLATFORM_32 1)
  ENDIF()

  IF(CMAKE_BUILD_TYPE STREQUAL "Debug" OR
     CMAKE_BUILD_TYPE STREQUAL "DebugGV")
    SET(OSG_LIBDIR_SUFFIX "${OSG_LIBDIR_SUFFIX}/debug")
    SET(OSG_LIBDIR_BUILD_TYPE_SUFFIX "debug")
  ENDIF()

  IF(OSG_DISABLE_MICROSOFT_SECURE_CXXX)
    OPTION(OSG_DISABLE_MS_ITERATOR_DEBUGGING "" ON)
  ELSE(OSG_DISABLE_MICROSOFT_SECURE_CXXX)
    OPTION(OSG_DISABLE_MS_ITERATOR_DEBUGGING "" OFF)
  ENDIF(OSG_DISABLE_MICROSOFT_SECURE_CXXX)

  OPTION(OSG_ENABLE_CUDA "Build OpenSG with CUDA support" OFF)

  IF(NOT WIN32 AND NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE Debug CACHE STRING
        "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
        FORCE)
  ENDIF(NOT WIN32 AND NOT CMAKE_BUILD_TYPE)

  # Disable boost cmake config, as it screws up OpenSG's boost config

  SET(Boost_NO_BOOST_CMAKE TRUE CACHE INTERNAL "" FORCE)

  SET(OSG_BUILD_ACTIVE TRUE)
  ADD_DEFINITIONS(-D OSG_BUILD_ACTIVE)

  IF(NOT WIN32)
    SET(OSG_SUPPORT_INC_SUBDIR "/OpenSG")
  ENDIF()

  INCLUDE(OpenSGExtDep)

  #############
  #### OpenSG

  LIST(FIND _OSG_COMPONENTS OSGFileIO _OSG_USE_FILEIO)
  LIST(FIND _OSG_COMPONENTS OSGImageFileIO _OSG_USE_IMAGEFILEIO)
  LIST(FIND _OSG_COMPONENTS OSGContribComputeBase _OSG_USE_CONTRIBCOMPUTE)
  LIST(FIND _OSG_COMPONENTS OSGContribCSM _OSG_USE_CONTRIBCSM)
  LIST(FIND _OSG_COMPONENTS OSGCluster _OSG_USE_CLUSTER)
  LIST(FIND _OSG_COMPONENTS OSGWindowQT4 _OSG_USE_QT)
  LIST(FIND _OSG_COMPONENTS OSGSystem _OSG_USE_SYSTEM)

  IF(_OSG_USE_CONTRIBCOMPUTE EQUAL -1 AND NOT _OSG_USE_SYSTEM EQUAL -1)
    LIST(FIND OSGSystem_DEP_LIB CUDA_CUDART_LIBRARY _OSG_USE_CONTRIBCOMPUTE)
  ENDIF()

  IF(NOT _OSG_USE_CONTRIBCSM EQUAL -1)
    IF(_OSG_USE_FILEIO EQUAL -1)
      LIST(APPEND _OSG_COMPONENTS OSGFileIO)
      SET(_OSG_USE_FILEIO 1)
    ENDIF(_OSG_USE_FILEIO EQUAL -1)

    IF(_OSG_USE_CLUSTER EQUAL -1)
      LIST(APPEND _OSG_COMPONENTS OSGCluster)
      SET(_OSG_USE_CLUSTER 1)
    ENDIF(_OSG_USE_CLUSTER EQUAL -1)
  ENDIF(NOT _OSG_USE_CONTRIBCSM EQUAL -1)

  FIND_PACKAGE(OpenSG REQUIRED COMPONENTS ${_OSG_COMPONENTS})

  IF(OpenSG_DIR)
    IF(NOT OSG_COMPILER_DEFAULTS)
      INCLUDE(SetupCompiler)
      SET(OSG_COMPILER_DEFAULTS 1 CACHE INTERNAL "Defaults written" FORCE ) #INTERNAL
    ENDIF(NOT OSG_COMPILER_DEFAULTS)

    INCLUDE(UpdateCompiler)

    INCLUDE(BuildFunctions)
    INCLUDE(ConfigurePackages)

    INCLUDE_DIRECTORIES(${OpenSG_INCLUDE_DIRS})

  ENDIF(OpenSG_DIR)

  #############
  #### Support
  #############

  IF(UNIX)
    FIND_LIBRARY(OSG_THREAD_LIB NAMES pthread)
    FIND_LIBRARY(OSG_DL_LIB     NAMES dl)

    OSG_ADD_OPT(OSG_THREAD_LIB)
    OSG_ADD_OPT(OSG_DL_LIB)
  ENDIF(UNIX)

  IF(APPLE)
    FIND_LIBRARY(OSG_APPLICATIONSERVICES_FRAMEWORK NAMES ApplicationServices)
    FIND_LIBRARY(OSG_CARBON_FRAMEWORK NAMES Carbon)
    FIND_LIBRARY(OSG_COCOA_FRAMEWORK NAMES Cocoa)
  ENDIF(APPLE)

  #############
  #### OpenGL
  #############

  FIND_PACKAGE(OpenGL REQUIRED)

  OSG_ADD_OPT(OPENGL_gl_LIBRARY)
  OSG_ADD_OPT(OPENGL_glu_LIBRARY)

  #############
  #### GLUT
  #############

  OSG_CONFIGURE_GLUT()

  IF(GLUT_FOUND)
    OSG_SET(OSG_WITH_GLUT 1)
    OSG_SET(OSG_GLUT_INC_DIR ${GLUT_INCLUDE_DIR})
    OSG_SET(OSG_GLUT_LIBS ${GLUT_LIBRARIES})
  ELSE(GLUT_FOUND)
    OSG_SET(OSG_WITH_GLUT 0)
    OSG_SET(OSG_GLUT_INC_DIR "")
    OSG_SET(OSG_GLUT_LIBS "")
  ENDIF(GLUT_FOUND)

  #############
  #### Python
  #############

  FIND_PACKAGE(PythonInterp)

  ##########
  #### boost
  ##########

  OSG_CONFIGURE_BOOST()
  OSG_CONFIGURE_ZLIB()

  MESSAGE(STATUS "Need fileio deps    : ${_OSG_USE_FILEIO}")
  MESSAGE(STATUS "Need imgfileio deps : ${_OSG_USE_IMAGEFILEIO}")
  MESSAGE(STATUS "Need cuda deps      : ${_OSG_USE_CONTRIBCOMPUTE}")
  MESSAGE(STATUS "Need cluster        : ${_OSG_USE_CLUSTER}")
  MESSAGE(STATUS "Need csm            : ${_OSG_USE_CONTRIBCSM}")
  MESSAGE(STATUS "Need qt             : ${_OSG_USE_QT}")

  IF(NOT _OSG_USE_IMAGEFILEIO EQUAL -1)

    MESSAGE(STATUS "Configure image file io")

    OSG_CONFIGURE_TIFF()
    OSG_CONFIGURE_PNG()
    OSG_CONFIGURE_JPEG()
    OSG_CONFIGURE_OPENEXR()
  ENDIF(NOT _OSG_USE_IMAGEFILEIO EQUAL -1)

  IF(NOT _OSG_USE_FILEIO EQUAL -1)

    MESSAGE(STATUS "Configure file io")

    OSG_CONFIGURE_COLLADA()

    IF(COLLADA_FOUND)

      IF(CMAKE_BUILD_TYPE STREQUAL "Debug" OR 
         CMAKE_BUILD_TYPE STREQUAL "DebugOpt")

        OSG_SET(OSG_COLLADA_LIBS ${COLLADA_LIBRARY_DEBUG})

      ELSE()

        OSG_SET(OSG_COLLADA_LIBS ${COLLADA_LIBRARY_RELEASE})

      ENDIF()

      IF(WIN32)
        SET(OSG_COLLADA_LIBS ${OSG_COLLADA_TARGETS})
      ENDIF(WIN32)

    ELSE(COLLADA_FOUND)

        SET(OSG_COLLADA_LIBS "")

    ENDIF(COLLADA_FOUND)
  ENDIF(NOT _OSG_USE_FILEIO EQUAL -1)

  IF(NOT _OSG_USE_CONTRIBCOMPUTE EQUAL -1) # AND OSG_ENABLE_CUDA)

    MESSAGE(STATUS "Configure cuda deps")

    FIND_PACKAGE(CUDA QUIET REQUIRED)

    INCLUDE(ConfigurePackages.OSGContribComputeBase)

    IF(NOT OSG_BUILD_DEPENDEND)
      OSG_CONFIGURE_NVSDKCOMMON()
      OSG_CONFIGURE_NVOCLUTILS()
      OSG_CONFIGURE_CUDACOMMON()
      OSG_CONFIGURE_CUDAUTIL()
      OSG_CONFIGURE_CUDPP()
      OSG_CONFIGURE_CUDAPARTSDK()
    ENDIF(NOT OSG_BUILD_DEPENDEND)

    MESSAGE(STATUS "NV Status: NV:${OSG_NVSDKCOMMON_FOUND}")
    MESSAGE(STATUS "Cuda Status: CC:${OSG_CUDACOMMON_FOUND} CU:${OSG_CUDAUTIL_FOUND} CP:${OSG_CUDPP_FOUND}")
    MESSAGE(STATUS "OCL Status : NV:${OSG_NVOCLUTILS_FOUND}")

    IF(CUDA_FOUND)
      SET(OSG_WITH_CUDA 1)
    ENDIF(CUDA_FOUND)
    IF(OPENCL_FOUND)
      SET(OSG_WITH_OPENCL 1)
    ENDIF(OPENCL_FOUND)

  ENDIF(NOT _OSG_USE_CONTRIBCOMPUTE EQUAL -1) # AND OSG_ENABLE_CUDA)

  IF(NOT _OSG_USE_QT EQUAL -1)

    #############
    #### QT
    #############

    OSG_CONFIGURE_QT()
  ENDIF()

  #############
  #### Python
  #############

  FIND_PACKAGE(PythonLibs)

  OSG_ADD_OPT(PYTHON_INCLUDE_PATH)
  OSG_ADD_OPT(PYTHON_LIBRARY)

  IF(Boost_FOUND AND PYTHONLIBS_FOUND)

    FIND_PACKAGE(Boost COMPONENTS python)

    IF(Boost_FOUND AND WIN32)

      SET(OSG_BOOST_PYTHON_TARGETS )
      OSG_ADD_IMPORT_LIB(OSG_BOOST_PYTHON_TARGETS Boost_PYTHON_LIBRARY)
      SET(OSG_BOOST_PYTHON_LIBS ${OSG_BOOST_PYTHON_TARGETS})
      
    ELSE(Boost_FOUND AND WIN32)

      IF(CMAKE_BUILD_TYPE STREQUAL "Debug" OR 
         CMAKE_BUILD_TYPE STREQUAL "DebugOpt")

        SET(OSG_BOOST_PYTHON_LIBS ${Boost_PYTHON_LIBRARY_DEBUG})

      ELSE()
        SET(OSG_BOOST_PYTHON_LIBS ${Boost_PYTHON_LIBRARY_RELEASE})
      ENDIF()

    ENDIF(Boost_FOUND AND WIN32)

    # We ignore if boost python fails, we catch that somewhere else
    # so if we get here Boost_FOUND was true in the first place
    SET(Boost_FOUND TRUE)

  ENDIF(Boost_FOUND AND PYTHONLIBS_FOUND)


  CHECK_BUILD_DIR()

  SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
  SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
  SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

  ADD_CUSTOM_TARGET(OSGAll)

  # optional pass for test programs
#  IF(OSGBUILD_TESTS)
    ADD_CUSTOM_TARGET(OSGAllTests)
    ADD_DEPENDENCIES(OSGAll OSGAllTests)
#  ENDIF(OSGBUILD_TESTS)

  ADD_CUSTOM_TARGET(OSGAllApps)
  ADD_DEPENDENCIES(OSGAll OSGAllApps)


  IF(WIN32)
    OSG_OPTION(OSG_USE_SEPARATE_LIBDIRS "" ON)
  ENDIF(WIN32)

  IF(OSGEXCLUDE_TESTS_FROM_ALL)
    SET(OSGEXCLUDE_TESTS EXCLUDE_FROM_ALL)
  ELSE()
    SET(OSGEXCLUDE_TESTS "")
  ENDIF()

  IF(OSGEXCLUDE_UNITTESTS_FROM_ALL)
    SET(OSGEXCLUDE_UNITTESTS EXCLUDE_FROM_ALL)
  ELSE()
    SET(OSGEXCLUDE_UNITTESTS "")
  ENDIF()

  IF(OSGEXCLUDE_EXAMPLES_SIMPLE_FROM_ALL)
    SET(OSGEXCLUDE_EXAMPLES_SIMPLE EXCLUDE_FROM_ALL)
  ELSE()
    SET(OSGEXCLUDE_EXAMPLES_SIMPLE "")
  ENDIF()

  IF(OSGEXCLUDE_EXAMPLES_ADVANCED_FROM_ALL)
    SET(OSGEXCLUDE_EXAMPLES_ADVANCED EXCLUDE_FROM_ALL)
  ELSE()
    SET(OSGEXCLUDE_EXAMPLES_ADVANCED "")
  ENDIF()

ENDMACRO(OSG_INIT)


MACRO(_OSG_SETUP_BUILD)

  # when adding passes, make sure to add a corresponding pass directory variable
  # OSG_PASSDIR_${PASSNAME} - this variable may not be empty!
  SET(OSG_CMAKE_PASSES "OSGCOLLECT" "OSGSETUP")

  SET(OSG_PASSDIR_OSGCOLLECT "Collect")
  SET(OSG_PASSDIR_OSGSETUP   "Build")

  ###############
  # Clean
  ###############

  FILE(GLOB OSG_OLD_BUILD_FILES  "${CMAKE_BINARY_DIR}/*.cmake")

  IF(OSG_OLD_BUILD_FILES)
    FILE(REMOVE ${OSG_OLD_BUILD_FILES})
  ENDIF(OSG_OLD_BUILD_FILES)

#  FOREACH(_OSG_COMPONENT ${STORED_PROJECTS})
  FOREACH(_OSG_COMPONENT ${_OSG_COMPONENTS})
    MESSAGE(STATUS "FAKE : ${CMAKE_BINARY_DIR}/${_OSG_COMPONENT}.cmake")
    FILE(WRITE ${CMAKE_BINARY_DIR}/${_OSG_COMPONENT}.cmake "#dummy")

    SET(_OSG_COMPONENT_LI )

    FOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_OSG_LIB})
      LIST(APPEND _OSG_COMPONENT_LI ${_OSG_COMPONENT_DEP})
    ENDFOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_OSG_LIB})

    FOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_LIB})
      IF(TARGET ${_OSG_COMPONENT_DEP})
        LIST(APPEND _OSG_COMPONENT_LI ${_OSG_COMPONENT_DEP})
      ELSE(TARGET ${_OSG_COMPONENT_DEP})
        LIST(APPEND _OSG_COMPONENT_LI ${${_OSG_COMPONENT_DEP}})
      ENDIF(TARGET ${_OSG_COMPONENT_DEP})
    ENDFOREACH(_OSG_COMPONENT_DEP ${${_OSG_COMPONENT}_DEP_LIB})

    IF(_OSG_COMPONENT_LI AND TARGET ${_OSG_COMPONENT})
      SET_TARGET_PROPERTIES(${_OSG_COMPONENT} PROPERTIES
                            IMPORTED_LINK_INTERFACE_LIBRARIES "${_OSG_COMPONENT_LI}")
    ENDIF(_OSG_COMPONENT_LI AND TARGET ${_OSG_COMPONENT})

  ENDFOREACH(_OSG_COMPONENT ${STORE_PROJECTS})

  ###############
  # Tests
  ###############

  # optional pass for test programs
  LIST(APPEND OSG_CMAKE_PASSES "OSGSETUPTEST")
  SET(OSG_PASSDIR_OSGSETUPTEST "Test")

  OSG_OPTION(OSG_ENABLE_FCD2CODE "" ON)
  OSG_OPTION(OSG_FCD2CODE_WRITE_CLASS "" OFF)

  ADD_CUSTOM_TARGET(OSGAllLibs)
  ADD_CUSTOM_TARGET(OSGAllContribLibs)

  SET(OSG_MAIN_LIB_TARGET OSGAllContribLibs)

  ADD_DEPENDENCIES(OSGAllLibs OSGAllContribLibs)
  ADD_DEPENDENCIES(OSGAll OSGAllLibs)

  ###############
  # Python
  ###############

  # optional pass for test programs
  IF(OSGBUILD_PYTHON_BINDINGS)
    LIST(APPEND OSG_CMAKE_PASSES "OSGPYTHON")
    SET(OSG_PASSDIR_OSGPYTHON "Python")

    IF(EXISTS ${PYOSG_PYPLUSPLUS_DIR})
      SET(OSG_HAS_PYOSG_PYPLUSPLUS_DIR "True")
    ELSE()
      SET(OSG_HAS_PYOSG_PYPLUSPLUS_DIR "False")
    ENDIF()

    IF(EXISTS ${PYOSG_PYPLUSPLUS_GOODIES_DIR})
      SET(OSG_HAS_PYOSG_PYPLUSPLUS_GOODIES_DIR "True")
    ELSE()
      SET(OSG_HAS_PYOSG_PYPLUSPLUS_GOODIES_DIR "False")
    ENDIF()

    SET(OSG_CAN_REGEN_PYTHON_BINDINGS FALSE)

    IF(GCCXML                       AND
       PYOSG_DIR                    AND
       PYOSG_PYPLUSPLUS_DIR         AND 
       PYOSG_PYPLUSPLUS_GOODIES_DIR)

     IF(EXISTS ${GCCXML}                       AND
        EXISTS ${PYOSG_DIR}                    AND
        EXISTS ${PYOSG_PYPLUSPLUS_DIR}         AND 
        EXISTS ${PYOSG_PYPLUSPLUS_GOODIES_DIR})

        SET(OSG_CAN_REGEN_PYTHON_BINDINGS TRUE)

      ENDIF()
    ENDIF()

    EXECUTE_PROCESS(
      COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                "${CMAKE_SOURCE_DIR}/Bindings/Python/genLibOrder.py"
                "${CMAKE_BINARY_DIR}/Python/Helper/genLibOrder.py")

    FILE(WRITE  "${CMAKE_BINARY_DIR}/Python/Helper/libOrder.py" "# Lib order information\n\n\nlibInfo = {}\n\n")
    FILE(APPEND "${CMAKE_BINARY_DIR}/Python/Helper/libOrder.py" "fullLibInfo = {}\n\n")

    IF(EXISTS ${PYOSG_DIR})
      FILE(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/Python/Helper")

      #########################
      # osggen.py
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osggen.py")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_BINARY_DIR}/Python/Helper/processed/osggen.py.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_BINARY_DIR}/Python/Helper/osggen.py")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Bindings/Python/Patches/osggen.py.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/Python/Helper/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # splitGenHelper.py
      #########################

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${CMAKE_SOURCE_DIR}/Bindings/Python/splitGenHelper.py"
                  "${CMAKE_BINARY_DIR}/Python/Helper/splitGenHelper.py")
     
      #########################
      # settings.py
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/settings.py")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_BINARY_DIR}/Python/Helper/processed/settings.py.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_BINARY_DIR}/Python/Helper/settings.py")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Bindings/Python/Patches/settings.py.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/Python/Helper/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")

      #########################
      # PreBoostPython.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/PreBoostPython.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/processed/PreBoostPython.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/PreBoostPython.h")

      FILE(READ ${_OSG_FILE_IN} _OSG_FILE_IN_DATA)

      STRING(REPLACE "<OpenSG/"
                     "<" _OSG_FILE_IN_DATA_P1 "${_OSG_FILE_IN_DATA}")

      FILE(WRITE ${_OSG_FILE_OUT_PROC} "${_OSG_FILE_IN_DATA_P1}")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # OsgPtrHelpers.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/OsgPtrHelpers.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/processed/OsgPtrHelpers.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/OsgPtrHelpers.h")

      FILE(READ ${_OSG_FILE_IN} _OSG_FILE_IN_DATA)

      STRING(REPLACE "<OpenSG/"
                     "<" _OSG_FILE_IN_DATA_P1 "${_OSG_FILE_IN_DATA}")

      FILE(WRITE ${_OSG_FILE_OUT_PROC} "${_OSG_FILE_IN_DATA_P1}")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # pypp_OSGBase_aliases.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/aliases.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/processed/pypp_aliases.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/pypp_aliases.h")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Bindings/Python/Patches/pypp_aliases.h.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Bindings/Python/Common/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # ColorWrapper.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/ColorWrapper.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/processed/ColorWrapper.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/ColorWrapper.h")

      FILE(READ ${_OSG_FILE_IN} _OSG_FILE_IN_DATA)

      STRING(REPLACE "<OpenSG/"
                     "<" _OSG_FILE_IN_DATA_P1 "${_OSG_FILE_IN_DATA}")

      FILE(WRITE ${_OSG_FILE_OUT_PROC} "${_OSG_FILE_IN_DATA_P1}")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # VecStorageWrappers.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/VecStorageWrappers.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/processed/VecStorageWrappers.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/VecStorageWrappers.h")

      FILE(READ ${_OSG_FILE_IN} _OSG_FILE_IN_DATA)

      STRING(REPLACE "<OpenSG/"
                     "<" _OSG_FILE_IN_DATA_P1 "${_OSG_FILE_IN_DATA}")

      FILE(WRITE ${_OSG_FILE_OUT_PROC} "${_OSG_FILE_IN_DATA_P1}")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # BaseWrappers.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/Wrappers.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/processed/BaseWrappers.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/BaseWrappers.h")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Patches/wrappers.h.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # BaseWrappers.cpp
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/Wrappers.cpp")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/processed/BaseWrappers.cpp.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/BaseWrappers.cpp")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Patches/wrappers.cpp.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Source/Base/Bindings/Python/Wrapper/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")



      #########################
      # SystemWrappers.h
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/Wrappers.h")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Wrapper/processed/SystemWrappers.h.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Wrapper/SystemWrappers.h")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Patches/wrappers.h.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Wrapper/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # SystemWrappers.cpp
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/Wrappers.cpp")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Wrapper/processed/SystemWrappers.cpp.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Wrapper/SystemWrappers.cpp")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Patches/wrappers.cpp.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Source/System/Bindings/Python/Wrapper/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # helpers.py
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/lib/helpers.py")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/processed/helpers.py.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/helpers.py")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Bindings/Python/Patches/helpers.py.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # cored_node.py
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/lib/cored_node.py")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/processed/cored_node.py.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/cored_node.py")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Bindings/Python/Patches/cored_node.py.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")


      #########################
      # fcd_reflector.py
      #########################

      SET(_OSG_FILE_IN       "${PYOSG_DIR}/src/osg_module/lib/fcd_reflector.py")
      SET(_OSG_FILE_OUT_PROC "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/processed/fcd_reflector.py.proc")
      SET(_OSG_FILE_OUT      "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/fcd_reflector.py")
      SET(_OSG_PATCH_FILE    "${CMAKE_SOURCE_DIR}/Bindings/Python/Patches/fcd_reflector.py.patch")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy
                  "${_OSG_FILE_IN}"
                  "${_OSG_FILE_OUT_PROC}")

      EXECUTE_PROCESS(COMMAND "patch" 
                      INPUT_FILE "${_OSG_PATCH_FILE}"
                      WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}/Bindings/Python/helpers/processed")

      EXECUTE_PROCESS(
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
                  "${_OSG_FILE_OUT_PROC}"
                  "${_OSG_FILE_OUT}")

    ENDIF(EXISTS ${PYOSG_DIR})

    SET(_OSG_SRC_PYPATH_HELPERS ${CMAKE_SOURCE_DIR}/Bindings/Python/helpers)
    SET(_OSG_SRC_PYPATH_OSG     ${CMAKE_BINARY_DIR}/Python/lib/osg2/helpers)

    SET(_OSG_DST_PYPATH_HELPERS ${CMAKE_BINARY_DIR}/Python/lib/osg2/helpers)
    SET(_OSG_DST_PYPATH_OSG     ${CMAKE_BINARY_DIR}/Python/lib/osg2/osg)

    FILE(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/Python/lib/osg2)
    FILE(MAKE_DIRECTORY ${_OSG_DST_PYPATH_HELPERS})
    FILE(MAKE_DIRECTORY ${_OSG_DST_PYPATH_OSG})

    OSG_SYMLINK_CHECKED(${CMAKE_SOURCE_DIR}/Bindings/Python/osg2/__init__.py
                        ${CMAKE_BINARY_DIR}/Python/lib/osg2/__init__.py)

    OSG_SYMLINK_CHECKED(${_OSG_SRC_PYPATH_HELPERS}/cored_node.py
                        ${_OSG_DST_PYPATH_HELPERS}/cored_node.py)
    OSG_SYMLINK_CHECKED(${_OSG_SRC_PYPATH_HELPERS}/fcd_reflector.py
                        ${_OSG_DST_PYPATH_HELPERS}/fcd_reflector.py)
    OSG_SYMLINK_CHECKED(${_OSG_SRC_PYPATH_HELPERS}/helpers.py
                        ${_OSG_DST_PYPATH_HELPERS}/helpers.py)
    OSG_SYMLINK_CHECKED(${_OSG_SRC_PYPATH_HELPERS}/__init__.py
                        ${_OSG_DST_PYPATH_HELPERS}/__init__.py)

    SET(OSG_PYTHON_COMMON_INCDIR "${OpenSG_DIR}/include/OpenSG/Bindings/Python/Common" CACHE PATH "" FORCE)

    ADD_CUSTOM_TARGET(OSGPy)

    IF(OSG_CAN_REGEN_PYTHON_BINDINGS)
      ADD_CUSTOM_TARGET(OSGPyGen)
    ENDIF()
#    ADD_CUSTOM_TARGET(OSGPyBuild)

  ENDIF(OSGBUILD_PYTHON_BINDINGS)

ENDMACRO(_OSG_SETUP_BUILD)

MACRO(_OSG_RUN_PASSES)

  FOREACH(LIBCONFIGFILE ${OSG_LIBRARY_CONFIG_FILES})
    GET_FILENAME_COMPONENT(LIBCONFIGDIR "${LIBCONFIGFILE}" PATH)
    GET_FILENAME_COMPONENT(LIBFILENAME  "${LIBCONFIGFILE}" NAME)
    STRING(REPLACE "CMakeLists.Lib." "" LIBFILENAME "${LIBFILENAME}")
    STRING(REPLACE ".txt"            "" LIBFILENAME "${LIBFILENAME}")

    IF(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${LIBCONFIGDIR}/${LIBFILENAME}.Prepare.cmake)
      INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/${LIBCONFIGDIR}/${LIBFILENAME}.Prepare.cmake)
    ENDIF()
  ENDFOREACH(LIBCONFIGFILE)

  # run build passes
  FOREACH(PASS ${OSG_CMAKE_PASSES})
    SET(OSG_CMAKE_PASS ${PASS})

    MESSAGE(STATUS "\nPASS : ${OSG_CMAKE_PASS} in ${OSG_PASSDIR_${PASS}}\n")

    FOREACH(LIBCONFIGFILE ${OSG_LIBRARY_CONFIG_FILES})
        GET_FILENAME_COMPONENT(LIBCONFIGDIR "${LIBCONFIGFILE}" PATH)
        GET_FILENAME_COMPONENT(LIBFILENAME  "${LIBCONFIGFILE}" NAME)
        STRING(REPLACE "CMakeLists.Lib." "" LIBFILENAME "${LIBFILENAME}")
        STRING(REPLACE ".txt"            "" LIBFILENAME "${LIBFILENAME}")

        ADD_SUBDIRECTORY("${LIBCONFIGDIR}" "${OSG_PASSDIR_${PASS}}/${LIBFILENAME}")

    ENDFOREACH(LIBCONFIGFILE)
   
  ENDFOREACH()

  IF(WIN32)
    SET(CMAKE_CONFIGURATION_TYPES "Debug;Release;DebugOpt;ReleaseNoOpt"
                                  CACHE STRING "OpenSG Build Types" FORCE )
  ENDIF(WIN32)

ENDMACRO(_OSG_RUN_PASSES)

MACRO(OSG_COLLECT_LIBS CURRENT_DIR_ONLY)

  _OSG_SETUP_BUILD()

  ###############
  # Passes
  ###############

  SET(_OSG_CURRDIR_ONLY ${CURRENT_DIR_ONLY})

  # Find files describing libraries to build, but make sure base
  # and system are processed first

  IF(_OSG_CURRDIR_ONLY)
    FILE(GLOB OSG_LIBRARY_CONFIG_FILES RELATIVE "${CMAKE_SOURCE_DIR}"
         "./*CMakeLists.Lib.*.txt")
  ELSE()
    FILE(GLOB_RECURSE OSG_LIBRARY_CONFIG_FILES RELATIVE "${CMAKE_SOURCE_DIR}"
         "./*CMakeLists.Lib.*.txt")
  ENDIF()

  IF(OSG_EXCLUDE_FROM_BUILD)
    LIST(REMOVE_ITEM OSG_LIBRARY_CONFIG_FILES ${OSG_EXCLUDE_FROM_BUILD})
  ENDIF()

  _OSG_RUN_PASSES()

ENDMACRO(OSG_COLLECT_LIBS CURRENT_DIR_ONLY)

MACRO(OSG_DOCOLLECT_LIBS)

  _OSG_SETUP_BUILD()

  ###############
  # Passes
  ###############

  SET(_OSG_CURRDIR_ONLY ${CURRENT_DIR_ONLY})

  SET(_OSG_TMPLIST ${ARGV})
  MATH(EXPR _OSG_LISTCOUNT ${ARGC}-1)

  # Find files describing libraries to build, but make sure base
  # and system are processed first

  SET(_OSG_TMPLIST ${ARGV})
  MATH(EXPR _OSG_LISTCOUNT ${ARGC}-1)

  FOREACH(_LOOPC RANGE 0 ${_OSG_LISTCOUNT} 2)

    MATH(EXPR _LOOPN ${_LOOPC}+1)

    LIST(GET _OSG_TMPLIST ${_LOOPC} OSGLIB_SOURCE_DIR)
    LIST(GET _OSG_TMPLIST ${_LOOPN} _OSG_CURRDIR_ONLY)

    IF(_OSG_CURRDIR_ONLY)
      FILE(GLOB _OSG_LIBRARY_CONFIG_FILES RELATIVE "${CMAKE_SOURCE_DIR}"
           "${${OSGLIB_SOURCE_DIR}}/*CMakeLists.Lib.*.txt")
    ELSE()
      FILE(GLOB_RECURSE _OSG_LIBRARY_CONFIG_FILES RELATIVE "${CMAKE_SOURCE_DIR}"
           "${${OSGLIB_SOURCE_DIR}}/*CMakeLists.Lib.*.txt")
    ENDIF()

    LIST(APPEND OSG_LIBRARY_CONFIG_FILES ${_OSG_LIBRARY_CONFIG_FILES})
  ENDFOREACH()

  IF(OSG_EXCLUDE_FROM_BUILD)
    LIST(REMOVE_ITEM OSG_LIBRARY_CONFIG_FILES ${OSG_EXCLUDE_FROM_BUILD})
  ENDIF()

  _OSG_RUN_PASSES()

ENDMACRO(OSG_DOCOLLECT_LIBS)
