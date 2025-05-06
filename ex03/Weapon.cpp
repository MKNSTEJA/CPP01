/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:14:43 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 08:33:31 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.h"

// Constructor
Weapon::Weapon(std::string wtype)
{
  this->type = wtype;
}

Weapon::Weapon()
{

}

// Destructor
Weapon::~Weapon()
{

}

// Getter function
const std::string& Weapon::getType()
{
  return (this->type);
}

// Setter function
void Weapon::setType(const std::string &wtype)
{
  this->type = wtype;
}
