#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include "lizardpaperrockscissorsspockmenudialog.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>

#include <boost/lexical_cast.hpp>

#include <QFile>

#include "lizardpaperrockscissorsspocksimulation.h"
#include "fileio.h"


#pragma GCC diagnostic pop

ribi::lprss::MenuDialog::MenuDialog()
{
}

int ribi::lprss::MenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc > 0) //Always
  {
    std::cout << GetHelp() << '\n';
    return 0;
  }
  return 0;
}

ribi::About ribi::lprss::MenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "LizardPaperRockScissorsSpock",
    "lizard-paper-rock-scissors-spock simulation",
    "the 12th of November 2015",
    "2015-2015",
    "http://www.richelbilderbeek.nl/ToolLizardPaperRockScissorsSpock.htm",
    GetVersion(),
    GetVersionHistory()
  );
  return a;
}

std::string ribi::lprss::MenuDialog::GetVersion() const noexcept
{
  return "1.2";
}

std::vector<std::string> ribi::lprss::MenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2015-05-10: Version 0.1: initial standalone version",
    "2015-05-11: Version 1.0: conformized version",
    "2015-05-24: Version 1.1: added to ProjectRichelBilderbeek, moved to namespace ribi::lprss"
    "2015-11-12: Version 1.2: moved to own GitHub"
  };
}

ribi::Help ribi::lprss::MenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    "PaperRockScissorsLizardSpock",
    "lizard-paper-rock-scissors-spock simulation",
    {
      //No additional options
    },
    {
    }
  );
}
