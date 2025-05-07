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

// Constructor
// Initialise the members of the class using input_checker
File::File(int argc, char **argv) { input_checker(argc, argv); }

// Destructor
// Remember to close the streams before destroying the class
File::~File() {
  _infile.close();
  _opfile.close();
}

/*
  Checks if the input given by user is valid and only then assigns
  the members of the class. Also file_checker() is called to check if
  the file provided is valid.
*/
void File::input_checker(int argc, char **argv) {
  if (argc != 4) {
    errorprint("Invalid number of inputs!", RED);
    _success =
        false; // this bool helps us to check if everythings perfect or not.
    return;
  }
  _s1 = argv[2]; // string to be replaced by _s2
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

// Checks if the file provided is valid.
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

// Just return the status if class creation was successful or not
bool File::check_status() { return (_success); }

/*
 Generate <filename>.replace by substituting instances of s1 with s2
 1. Read line by line from the given file.
 2. Find instance of s1 in the line:
    - If instance found -> copy the line until s1 and
      then write s2 at the end instead of s1 inside the replace file.
    - Else if instance not found -> Copy the whole line to replace file
*/
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

// Just incase if someone wants to print the contents of the file
void File::print_files() {
  std::cout << "\n";
  fileprint(_filename);
  std::cout << "\n";
  fileprint(_filename + ".replace");
}
