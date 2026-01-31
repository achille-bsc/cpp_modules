/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:54:03 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:44:19 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor Called\n\r";
}

Intern::Intern(const Intern& other)
{
	(void) other;
	std::cout << "Intern Copy Constructor Called\n\r";
}

Intern::~Intern()
{
	std::cout << "Intern Destructor Called\n\r";
}

Intern& Intern::operator=(const Intern& other)
{
	(void) other;
	std::cout << "Intern \"=\" Operator Overoad Called\n\r";
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target) const
{
	std::string names[3] = {"presidential pardon", "robotomy request",
							"shrubbery creation"};
	int number = 0;
	while (number < 3) {
		if (names[number] == formName)
			break ;
		number++;
	}
	
	switch (number)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Form Doesn't Exist\n\r";
			return NULL;
	}
}