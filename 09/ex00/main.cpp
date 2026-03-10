/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:53:26 by abosc             #+#    #+#             */
/*   Updated: 2026/03/10 14:08:42 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void error(ERRORS error)
{
	std::cout << "Error: ";
	switch (error)
	{
	case ARGUMENTS_COUNT:
		std::cout << "You need at least one argument!\n";
		break;
	
	case FILE_CANT_OPEN:
		std::cout << "Any of the files can't be opened!\n";
		break;

	default:
		std::cout << "Any error occured!\n";
		break;
	}
}

std::string getFileContent(std::ifstream &file)
{
	std::string buff;
	std::string global;
	while (std::getline(file, buff))
		global += buff + '\n';
	file.close();
	return (global);
}

int startWith(std::string s1, std::string s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s2[i] == '\0')
		return (1);
	return (0);
}



int parse(std::string datas, char *comp_file_url)
{
	std::ifstream compFile(DATABASE_FILE_URL);
	if (!compFile)
		error(FILE_CANT_OPEN);
	std::string compDatas = getFileContent(compFile);
	
	if (!startWith(compDatas, "Date | value\n"))
		return (1);
	checkformat(compDatas);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		error(ARGUMENTS_COUNT);

	std::ifstream dataBaseFile(DATABASE_FILE_URL);
	if (!dataBaseFile)
		error(FILE_CANT_OPEN);

	std::string datas = getFileContent(dataBaseFile);
	parse(datas, argv[1]);
	return (0);
}