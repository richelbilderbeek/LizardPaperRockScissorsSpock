# Qt does not go well with -Weffc++
include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)

include(../RibiLibraries/Boost.pri)

include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppFileIo/CppFileIo.pri)
include(../RibiClasses/CppHelp/CppHelp.pri)
include(../RibiClasses/CppMenuDialog/CppMenuDialog.pri)
include(../RibiClasses/CppQtAboutDialog/CppQtAboutDialog.pri)
include(../RibiClasses/CppQtHideAndShowDialog/CppQtHideAndShowDialog.pri)

include(LizardPaperRockScissorsSpock.pri)
include(LizardPaperRockScissorsSpockSimulation.pri)
include(QtLizardPaperRockScissorsSpockSimulation.pri)

include(LizardPaperRockScissorsSpockDesktop.pri)

SOURCES += qtmain.cpp

# Thanks to Qt
QMAKE_CXXFLAGS += -Wno-unused-variable

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
