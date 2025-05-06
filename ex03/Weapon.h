/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:11:37 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/29 08:55:54 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <string>
# include <iostream>

class Weapon
{
  private:
    std::string type;

  public:
    // Constructor and Destructor
    Weapon(std::string wtype);
    Weapon(); // Need extra constructor with no args incase user inputs no args.
    ~Weapon();
    // Getter function
    const std::string& getType();
    // Setter function
    void setType(const std::string& wtype);
};

