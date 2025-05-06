/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:50:22 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 14:05:47 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.h"

void randomChump(std::string name)
{
  Zombie zombie;

  zombie.assign_name(name);
  zombie.announce();
}
