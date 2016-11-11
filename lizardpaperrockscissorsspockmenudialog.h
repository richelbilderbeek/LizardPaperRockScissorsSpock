#ifndef LIZARDPAPERROCKSCISSORSSPOCKMENUDIALOG_H
#define LIZARDPAPERROCKSCISSORSSPOCKMENUDIALOG_H

#include "menudialog.h"

namespace ribi {
namespace lprss { //Lizard-Paper-Rock-Scissors-Spock

struct MenuDialog final : public ::ribi::MenuDialog
{
  MenuDialog();
  ~MenuDialog() noexcept {}
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;

  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;
};

} //~namespace lprss { //Lizard-Paper-Rock-Scissors-Spock
} //~namespace ribi

#endif // LIZARDPAPERROCKSCISSORSSPOCKMENUDIALOG_H
