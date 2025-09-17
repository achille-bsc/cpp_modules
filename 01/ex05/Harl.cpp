/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:32:58 by abosc             #+#    #+#             */
/*   Updated: 2025/09/17 13:27:26 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Harl::Harl	(void)	{}
Harl::~Harl	(void)	{}

void	Harl::debug		(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info		(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning	(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error		(void)
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*functions[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	for (size_t i = 0; i < LEVELS_NUMBER; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
	
	std::cout << ERROR_LEVEL_VALUE	<< std::endl << std::endl;
	std::cout << USAGE_EXAMPLE		<< std::endl;
	std::cout << ARGS_AVAILABLE		<< std::endl;
}