cmake_minimum_required(VERSION 2.6.0)
FIND_PACKAGE(LATEX)

project(TestCocoon) # the name of your project
include("src/commoncode/common.cmake")
include("src/commoncode/version.cmake")

add_subdirectory("src")

IF(LATEX_COMPILER)
  add_subdirectory("doc")
ENDIF(LATEX_COMPILER)

MESSAGE( STATUS "Build mode: " ${CMAKE_BUILD_TYPE_UPPER} )
MESSAGE( STATUS "TestCocoon Version: " ${TESTCOCOON_VERSION_DOT} )

SET(SRCTBZ2 ${CMAKE_CURRENT_SOURCE_DIR}/binaries/testcocoon-src-${TESTCOCOON_VERSION_DOT}.tar.bz2)
SET(SRC_CONTAINS HEAD src/ gen/ doc/ cppunit-1.12.0/ tutorial/ CMakeLists.txt)
ADD_CUSTOM_TARGET(src 
      COMMAND git archive --format=tar --prefix=testcocoon-src-${TESTCOCOON_VERSION_DOT}/ ${SRC_CONTAINS}| bzip2 > ${SRCTBZ2}
      WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    )
IF (WIN32)
  set_property(TARGET src PROPERTY FOLDER "Tools")
ENDIF()

# uninstall target
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/src/commoncode/make_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/src/commoncode/make_uninstall.cmake"
    IMMEDIATE @ONLY)

add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/src/commoncode/make_uninstall.cmake)

INCLUDE(InstallRequiredSystemLibraries)

SET(CPACK_PACKAGE_NAME "TestCocoon")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Code Coverage for C++ and C#")
SET(CPACK_PACKAGE_VENDOR "see src/AUTHORS file")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "${CMAKE_CURRENT_SOURCE_DIR}/README.TXT")
SET(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/src/LICENSE.TXT")
SET(CPACK_PACKAGE_VERSION_MAJOR ${TESTCOCOON_VERSION_MAJOR})
SET(CPACK_PACKAGE_VERSION_MINOR ${TESTCOCOON_VERSION_MINOR})
SET(CPACK_PACKAGE_VERSION_PATCH ${TESTCOCOON_VERSION_PATCH})
IF("${CMAKE_SYSTEM}" MATCHES "Linux")
  SET(CPACK_GENERATOR "DEB;TBZ2;STGZ")
  SET(CPACK_PACKAGE_CONTACT "info@testcocoon.org")
  SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libqt4-network, libqt4-xml, libqt4-svg")
ENDIF("${CMAKE_SYSTEM}" MATCHES "Linux")
IF(WIN32)
  SET(CPACK_GENERATOR "ZIP")
ENDIF(WIN32)

INCLUDE(CPack)
