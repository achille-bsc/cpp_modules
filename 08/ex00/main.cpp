/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:39:54 by abosc             #+#    #+#             */
/*   Updated: 2026/02/05 15:32:45 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int i = 0;
	std::vector<int> vec;

	while (i <= 42)
	{
		vec.push_back(i * 42);
		i++;
	}

	std::cout << "Vector contents: ";
	for (size_t j = 0; j < vec.size(); j++)
		std::cout << vec[j] << " ";
	std::cout << "\n\n" << "==================================" << "\n\n";

	try
	{
		int value = easyfind(vec, 42);
		std::cout << "Value found: " << value << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int value = easyfind(vec, 84);
		std::cout << "Value found: " << value << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		int value = easyfind(vec, 21);
		std::cout << "Value found: " << value << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}