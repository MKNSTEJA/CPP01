/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:42:35 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 09:01:15 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.h"

// Constructor 
HumanA::HumanA(const std::string& Name, Weapon& type) : name(Name), weapon(type)
{

}

// Destructor
HumanA::~HumanA()
{

}

void HumanA::attack()
{
  std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}
