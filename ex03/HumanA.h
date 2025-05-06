/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:17:05 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 08:50:08 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.h"

class HumanA
{
  private:
    std::string name;
    Weapon& weapon;

  public:
    // Constructor
    HumanA(const std::string& Name, Weapon& type);
    //Destructor
    ~HumanA();
    // Atk function
    void attack();
};
