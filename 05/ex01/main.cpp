/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:09:52 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 17:55:28 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat four("four", 15);
	try {
		Form test("test", 16, 151);
	}
	catch (std::exception &e) {
		e.what();
	}
	try {
		Form test("test", -1, 127);
	}
	catch (std::exception &e) {
		e.what();
	}
	try {
		Form test("test", 14, 8);
		std::cout << test << std::endl;
		four.signForm(test);
		std::cout << test.getIsSigned() << std::endl;
	}
	catch (std::exception &e) {
		e.what();
	}
	try {
		Form test("test", 14, 8);
		std::cout << test << std::endl;
		four.signForm(test);
		std::cout << test.getIsSigned() << std::endl;
	}
	catch (std::exception &e) {
		e.what();
	}
	std::cout << "-------------------------------" << std::endl;
	try {
		Form test("test", 15, 8);
		std::cout << test << std::endl;
		four.signForm(test);
		std::cout << test.getIsSigned() << std::endl;
	}
	catch (std::exception &e) {
		e.what();
	}
	return 0;
}

