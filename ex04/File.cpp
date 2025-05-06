/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:23:33 by kmummadi          #+#    #+#             */
/*   Updated: 2025/05/06 17:24:47 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(int argc, char **argv) { input_checker(argc, argv); }

File::~File() {
  _infile.close();
  _opfile.close();
}

void File::input_checker(int argc, char **argv) {
  if (argc != 4) {
    errorprint("Invalid number of inputs!", RED);
    _success = false;
    return;
  }
  _s1 = argv[2];
  _s2 = argv[3];
  if (_s1.empty() || _s2.empty()) {
    errorprint("Empty strings as input", RED);
    _success = false;
    return;
  }
  _filename = argv[1];
  file_checker();
  return;
}

void File::file_checker() {

  _infile.open(_filename);
  if (!_infile) {
    errorprint("Input file cannot be opened", RED);
    _success = false;
    return;
  }
  _opfile.open(_filename + ".replace");
  if (!_opfile) {
    errorprint("Output file cannot be opened or created", RED);
    _infile.close();
    _success = false;
    return;
  }
  _success = true;
  return;
}

bool File::check_status() { return (_success); }

void File::make_replacefile() {
  std::string line;
  size_t found = 0;
  size_t pos = 0;
  while (std::getline(_infile, line)) {
    pos = 0;
    found = line.find(_s1, pos);
    while (found != std::string::npos) {
      _opfile << line.substr(pos, found - pos) << _s2;
      pos = found + _s1.length();
      found = line.find(_s1, pos);
    }
    _opfile << line.substr(pos);
    if (!_infile.eof())
      _opfile << "\n";
    _opfile.flush();
  }
}

void File::print_files() {
  std::cout << "\n";
  fileprint(_filename);
  std::cout << "\n";
  fileprint(_filename + ".replace");
}
