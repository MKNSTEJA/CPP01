/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 01:11:40 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 13:58:32 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

// Constructor
Zombie::Zombie()
{
  // Create Zombie class
}

Zombie::~Zombie()
{
  // Destroy zombie class
}

// Makes it announce itself
void Zombie::announce()
{
  std::cout << colortxt(p_name + ":", YELLOW);
  std::cout << ITALIC << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

// Helps to assign the private var "p_name" to user's choice
void Zombie::assign_name(const std::string& name)
{
  this->p_name = name;
}

// Add colours to strings/text
inline std::string colortxt(std::string str, const std::string& color)
{
  return (color + str + RESET);
}
