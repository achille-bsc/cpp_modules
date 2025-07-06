/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:23:09 by abosc             #+#    #+#             */
/*   Updated: 2025/07/03 15:59:13 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <ostream>

std::string	replacer(std::string str, std::string s1, std::string s2)
{
	
}

int main(int argc, char **argv)
{
	std::string		myText;
	std::string		totalTxt;
	std::ifstream	file(argv[1]);
	
	if (argc != 4)
		return (std::cout << "Usage: ./replacer <filename> <s1> <s2>" << std::endl, 1);

	while(getline(file, myText))
		totalTxt += myText;
	file.close();
	std::cout << "coucou sale pute" << std::endl;
	std::cout << replacer(totalTxt, argv[2], argv[3]) << std::endl;
	return (1);
}
