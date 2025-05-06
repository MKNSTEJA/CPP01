/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:58:42 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 09:06:04 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.h"

// Constructor
HumanB::HumanB(std::string Name) : name(Name)
{

}

// Destructor
HumanB::~HumanB()
{

}

void HumanB::attack()
{
  std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
}

void HumanB::setWeapon(Weapon& type)
{
  this->weapon = &type;
}
