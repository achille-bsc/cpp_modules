/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:38:23 by abosc             #+#    #+#             */
/*   Updated: 2026/02/25 16:22:14 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>

#include "MutantStack.hpp"

int main(void)
{
	std::cout << "===================================\n";
	std::cout << "Test with common container (vertor)\n";
	std::cout << "===================================\n";
	try
	{
		std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

		std::vector<std::string>::iterator it;

		it = cars.begin();
		while (it != cars.end())
		{
			std::cout << *it << "\n";
			it++;
		}
		std::cout << "Tests passed successfully!\n\n\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "An error occured during the common tests!\n\n\n";
	}


	std::cout << "======================\n";
	std::cout << "Test with Mutant Stack\n";
	std::cout << "======================\n";
	try
	{
		MutantStack<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

		MutantStack<std::string>::iterator it;

		it = cars.begin();
		while (it != cars.end())
		{
			std::cout << *it << "\n";
			it++;
		}
		std::cout << "Tests passed successfully!\n\n\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "An error occured during the common tests!\n\n\n";
	}
	
	
	return (0);
}