/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:23:09 by abosc             #+#    #+#             */
/*   Updated: 2025/09/17 13:15:54 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cout << "Usage: ./replacer <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string		filename = argv[1];
	std::ifstream	ifs(filename.c_str());
	
	if (!ifs.is_open())
	{
		std::cout << "Error: This file couldn't be open" << std::endl;
		return (1);
	}
	
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: s1 & s2 musn't be empty" << std::endl;
		return (1);
	}
	
	filename += ".replace";
	std::ofstream	ofs(filename.c_str());
	
	if (!ofs.is_open())
	{
		std::cout << "Error: The output file coudn't be open or created: " << filename << std::endl;
		return (1);
	}
	
	std::string		buff;

	while (getline(ifs, buff))
	{
		std::size_t	pos = 0;
		while ((pos = buff.find(s1, pos)) != std::string::npos)
		{
			buff.erase(pos, s1.length());
			buff.insert(pos, s2);
			pos += s2.length();
		}
		ofs << buff << std::endl;
	}

	ifs.close();
	ofs.close();

	return (0);
}
