/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:20:56 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 14:26:19 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int main(void)
{
  Zombie *h_zombie;

  h_zombie = newZombie("Heaps");
  randomChump("Stacks");
  h_zombie->announce();
  delete h_zombie;

  return (0);
}
