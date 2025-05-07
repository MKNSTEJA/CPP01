/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 09:54:45 by kmummadi          #+#    #+#             */
/*   Updated: 2025/05/07 10:37:28 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "utils.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
  colorprint(
      "\nI love having extra bacon for my "
      "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n",
      GREEN);
}

void Harl::info() {
  colorprint(
      "\nI cannot believe adding extra bacon costs more money. You didn’t put "
      "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n",
      YELLOW);
}

void Harl::warning() {
  colorprint(
      "\nI think I deserve to have some extra bacon for free. I’ve been coming "
      "for years, whereas you started working here just last month.\n",
      ORANGE);
}

void Harl::error() {
  colorprint("\nThis is unacceptable! I want to speak to the manager now.\n",
             RED);
}

void Harl::complain(std::string level) {
  void (Harl::*complaints[4])(void) = {&Harl::debug, &Harl::info,
                                       &Harl::warning, &Harl::error};
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int index = 0; index < 4; ++index) {
    if (levels[index] == level) {
      (this->*complaints[index])();
      return;
    }
  }
  std::cout << colortxt("\n[ERROR]: ", RED) << colortxt("Level \"", RED)
            << colortxt(level, RED) << colortxt("\" not found!", RED)
            << std::endl;
}
