/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 22:16:47 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 22:34:13 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
  if (N <= 0)
    return (NULL);
  
  Zombie* horde;
  horde = new Zombie[N];
  for (int i = 0; i < N; ++i)
  {
    horde[i].assign_name(name);
  }
  return (horde);
}

