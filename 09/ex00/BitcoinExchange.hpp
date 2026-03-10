/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:52:12 by abosc             #+#    #+#             */
/*   Updated: 2026/03/10 14:34:21 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_EXCHANGE
# define BTC_EXCHANGE

#include <iostream>
#include <fstream> 
#include <string>
#include <map>

#define DATABASE_FILE_URL "./datas.csv"

enum ERRORS
{
	ARGUMENTS_COUNT,
	FILE_CANT_OPEN
};

class BitcoinExchange
{
	private:
		std::map<std::string, double> values;
		int parseDate(std::string date);
		
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange& operator=(BitcoinExchange& other);
		void loadDatabase(std::string dataFile);
};


#endif