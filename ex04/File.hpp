/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:10:12 by kmummadi          #+#    #+#             */
/*   Updated: 2025/05/06 09:18:39 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

class File {

private:
  std::string _filename;
  std::string _s1;
  std::string _s2;
  std::ifstream _infile;
  std::ofstream _opfile;
  bool _success;
  void input_checker(int argc, char **argv);
  void file_checker();

public:
  // Constructor and Destructor
  File(int argc, char **argv);
  ~File();

  bool check_status();
  void make_replacefile();
  void print_files();
};
