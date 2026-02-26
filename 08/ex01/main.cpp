/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:36:37 by abosc             #+#    #+#             */
/*   Updated: 2026/02/26 03:16:53 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	Span rdsp = Span(100000);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	srand(time(0));

	std::vector<int> numbers(100, 0);
	for (int i = 0; i < 100; i++)
		numbers[i] = rand() % 1000000;
	rdsp.addNumbers(numbers);
	std::cout << rdsp.shortestSpan() << std::endl;
	std::cout << rdsp.longestSpan() << std::endl;
	try {
		std::vector<int> nb(1000000, 0);
		for (int i = 0; i < 1000000; i++)
			nb[i] = rand() % 1000000;
		rdsp.addNumbers(nb);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	
	return (0);
}