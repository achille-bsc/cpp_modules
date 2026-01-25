/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:54:03 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 15:13:44 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& other)
{}

Intern::~Intern()
{}

Intern& Intern::operator=(const Intern& other)
{}

AForm *Intern::makeForm(std::string formName, std::string target) const
{
	std::string names[3] = {"presidential pardon request", "robotomy request",
							"shrubbery creation request"};
	int number = 0;
	while (number <= 3) {
		if (names[number] == formName)
		break;
		number++;
	}
	
	switch (number) {
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			throw FormDoesntExist();
	}
}

const char* Intern::FormDoesntExist::what() const throw()
{
	return ("Error: Form doesn't exist");
}