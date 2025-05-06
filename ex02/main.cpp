/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 22:36:29 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/28 22:47:07 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

void colorprint(std::string name, std::string& ref);
void colorprint(std::string name, std::string* ref);

// Define colours
const std::string RED     = "\033[1;31m";
const std::string GREEN   = "\033[1;32m";
const std::string YELLOW  = "\033[1;33m";
const std::string BLUE    = "\033[1;34m";
const std::string ORANGE  = "\033[38;5;208m";  // Extended ANSI: orange!
const std::string RESET   = "\033[0m";
const std::string ITALIC  = "\033[3m";

int main(void)
{
  std::string str = "HI THIS IS BRAIN";
  std::string *ptr = &str; // Pointer
  std::string& ref = str; // Reference

  // Print memory addresses held by each one
  std::cout << BLUE << "Addresses:\n" << RESET;
  colorprint("String", &str);
  colorprint("Pointer", ptr);
  colorprint("Ref", &ref);

  // Print values held by each one
  std::cout << BLUE << "\nValues:\n" << RESET;
  colorprint("String", str);
  colorprint("Pointer", *ptr);
  colorprint("Ref", ref);
}

void colorprint(std::string name, std::string& ref)
{
  std::cout << YELLOW << name << " = " << RESET;
  std::cout << ref << std::endl;
}

void colorprint(std::string name, std::string *ref)
{
  std::cout << YELLOW << name << " = " << RESET;
  std::cout << ref << std::endl;
}
