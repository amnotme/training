/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leopoldohernandez <Leo@42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:27:41 by leopoldoh         #+#    #+#             */
/*   Updated: 2019/04/27 21:42:49 by leopoldoh        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void 		numArgsCheck(int argc)
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments.";
		std::cerr << " You provided: " << argc;
		std::cerr << " argument(s). You must provide 4 arguments" << std::endl;
		std::cerr << "Usage: [./replace] [_file_] [_replacingThisString_] [_forThisString_]";
		std::cerr << std::endl;
		exit(1);
	}
}

void		fileOpenCheck(std::string arg)
{
	std::ifstream file(arg);
	if (!file.is_open())
	{
		std::cerr << "Unable to open file" << std::endl;
		exit(2);
	}
	file.close();
}

void		stringsCheck(char *s1, char *s2)
{
	if (s1 == "" || s2 == "")
	{
		std::cerr << "One or more of your strings are empty" << std::endl;
		exit(3);
	}
}
int		main(int argc, char **argv)
{
	numArgsCheck(argc);
	fileOpenCheck(std::string(argv[1]));
	stringsCheck(argv[2], argv[3]);
	if (argc == 4)
	{
		std::string fileName = std::string(argv[1]);	
		std::string line;
		std::ifstream file(fileName);
		std::ofstream ofile(fileName + ".replace");
		std::string s1 = std::string(argv[2]);
		std::string s2 = std::string(argv[3]);		


		if (file.is_open())
		{
			while (getline(file, line))
			{
				std::cout << line << std::endl;
				ofile << line << std::endl;
			}
		}
		ofile.close();
		file.close();
		std::cout << s1 << "-----------" << s2 << std::endl;
	}
	else
		std::cout << "Unable to open up file" << std::endl;
	return (0);
}
