/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:56:16 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 08:58:28 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.h"

class HumanB
{
  private:
    std::string name;
    Weapon* weapon;

  public:
    // Constructor and Destructor
    HumanB(std::string Name);
    ~HumanB();

    void attack();
    void setWeapon(Weapon& type);
};
