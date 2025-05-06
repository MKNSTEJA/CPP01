/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:20:56 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 22:33:04 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

int main(void)
{
  Zombie *horde;
  int N = 5;

  horde = zombieHorde(N, "Hogriders");
  for(int i = 0; i < N; ++i)
  {
    horde[i].announce();
  }
  delete[] horde;
  return (0);
}
