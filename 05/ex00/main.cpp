/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:09:52 by abosc             #+#    #+#             */
/*   Updated: 2025/10/16 14:44:21 by abosc            ###   ########.fr       */
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
		b1.gradeIncrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		b3.gradeDecrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}