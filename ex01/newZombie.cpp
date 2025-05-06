/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:58:57 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 14:04:58 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

Zombie* newZombie(std::string name)
{
  Zombie *zombie; 
  
  zombie = new Zombie;
  zombie->assign_name(name);
  
  return (zombie);
}
