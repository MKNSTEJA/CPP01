/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:41:12 by kmummadi          #+#    #+#             */
/*   Updated: 2025/05/06 09:20:47 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int argc, char **argv) {
  File newfile(argc, argv);
  if (!newfile.check_status())
    return (-1);
  newfile.make_replacefile();
  // newfile.print_files();
  colorprint("Success! Replace file has been created\n", GREEN);
}
