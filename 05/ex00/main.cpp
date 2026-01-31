/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:09:52 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 17:36:41 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat b1 = Bureaucrat("abosc", 1);
	Bureaucrat b3 = Bureaucrat("abosc", 150);
	Bureaucrat b5 = Bureaucrat("abosc", 75);
	Bureaucrat b6 = Bureaucrat("abosc", 26);
	try
	{
		Bureaucrat b2 = Bureaucrat("abosc", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat b4 = Bureaucrat("abosc", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	try
	{
		b1.gradePromotion();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		b3.gradeDemotion();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << b1 << std::endl;
	
	return (0);
}