/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:37:59 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 14:23:52 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>

// Define colours
const std::string RED     = "\033[1;31m";
const std::string GREEN   = "\033[1;32m";
const std::string YELLOW  = "\033[1;33m";
const std::string BLUE    = "\033[1;34m";
const std::string ORANGE  = "\033[38;5;208m";  // Extended ANSI: orange!
const std::string RESET   = "\033[0m";
const std::string ITALIC  = "\033[3m";

class Zombie
{
  private:
    std::string p_name;

  public:

    // Constructor
    Zombie();
    // Destructor
    ~Zombie();
    // Announce function
    void announce(void);
    // Assign name to user's choice
    void assign_name(const std::string &name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

// Utils
inline std::string colortxt(std::string str, const std::string& color);

