/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:01:39 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 09:03:15 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.h"
# include "HumanA.h"
# include "HumanB.h"

int main()
{
  { 
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  
  return (0);
}
