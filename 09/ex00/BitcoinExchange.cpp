/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:52:10 by abosc             #+#    #+#             */
/*   Updated: 2026/03/10 14:34:31 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./BitcoinExchange.hpp"

///////////
// UTILS //
///////////
// char** split(std::string str, std::string del)
// {
	
// }

BitcoinExchange::BitcoinExchange()	{};
BitcoinExchange::~BitcoinExchange()	{};

BitcoinExchange::BitcoinExchange(BitcoinExchange& other): values(other.values)
{}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& other)
{
	if (this != &other)
	{
		this->values = other.values;
	}
	return (*this);
}

int BitcoinExchange::parseDate(std::string date)
{
	if (
		(
			isdigit(date[0])
			&& isdigit(date[1])
			&& isdigit(date[2])
			&& isdigit(date[3])
		) &&
		(
			date[4] == '-'
			&& date[7] == '-'	
		) &&
		(
			isdigit(date[5])
			&& isdigit(date[6])
		) &&
		(
			isdigit(date[8])
			&& isdigit(date[9])
		)
	)
		return (1);
	return (0);
	
}

void BitcoinExchange::loadDatabase(std::string filename)
{
	std::ifstream file(filename);
	std::string buff;
	std::string global;
	while (std::getline(file, buff))
	{
		size_t pos = buff.find(" | ");
        if (pos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << buff << std::endl;
            continue;
        }
		std::string date = buff.substr(0, pos);
        std::string valueStr = buff.substr(pos + 3);
		if (parseDate(date))
		{
			
		}
		if (parseValue(valueStr))
		{
			
		}
		values.insert(date, valueStr);
	}

}2011-01-03 | 3