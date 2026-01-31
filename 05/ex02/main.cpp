/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:01:50 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:28:23 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <alegrix@student.42lehavre.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:08:17 by alegrix           #+#    #+#             */
/*   Updated: 2026/01/29 23:26:12 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	ShrubberyCreationForm stest("house");
	Bureaucrat	jeanc("Jeanc", 1);
	Bureaucrat	jeann("Jeann", 150);
	jeanc.executeForm(stest);
	jeanc.signForm(stest);
	jeann.executeForm(stest);
	jeanc.executeForm(stest);
	std::cout << "----------------------" << std::endl;
	PresidentialPardonForm ptest("bad");
	jeann.signForm(ptest);
	jeanc.executeForm(ptest);
	jeanc.signForm(ptest);
	jeanc.executeForm(ptest);
	jeann.executeForm(ptest);
	std::cout << "----------------------" << std::endl;
	RobotomyRequestForm rtest("human");
	jeann.signForm(rtest);
	jeanc.executeForm(rtest);
	jeanc.signForm(rtest);
	jeanc.executeForm(rtest);
	jeanc.executeForm(rtest);
	jeanc.executeForm(rtest);
	jeanc.executeForm(rtest);
	jeann.executeForm(rtest);
}

