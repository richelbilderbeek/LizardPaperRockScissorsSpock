# Qt does not go well with -Weffc++
include(../RibiLibraries/ConsoleApplicationNoWeffcpp.pri)

include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)

include(../RibiClasses/CppLizardPaperRockScissorsSpock/CppLizardPaperRockScissorsSpock.pri)
include(../RibiClasses/CppLizardPaperRockScissorsSpockSimulation/CppLizardPaperRockScissorsSpockSimulation.pri)

include(LizardPaperRockScissorsSpockConsole.pri)

SOURCES += main.cpp
