/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:01:50 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 20:00:50 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <exception>
#include <iostream>
#include <ostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat jeanc("jeanc", 1);
	Bureaucrat jeann("jeann", 150);
	Intern	test;
	AForm *testp = test.makeForm("presidential pardon", "jeanb");
	if (!testp)
		return (0);
	jeanc.executeForm(*testp);
	jeann.executeForm(*testp);
	jeanc.signForm(*testp);
	jeann.signForm(*testp);
	jeanc.executeForm(*testp);
	jeann.executeForm(*testp);
	std::cout << "---------------" << std::endl;
	AForm *testr = test.makeForm("robotomy request", "jeanb");
	jeanc.executeForm(*testr);
	jeann.executeForm(*testr);
	jeanc.signForm(*testr);
	jeann.signForm(*testr);
	jeanc.executeForm(*testr);
	jeann.executeForm(*testr);
	std::cout << "---------------" << std::endl;
	AForm *tests = test.makeForm("shrubbery creation", "jeanb");
	jeanc.executeForm(*tests);
	jeann.executeForm(*tests);
	jeanc.signForm(*tests);
	jeann.signForm(*tests);
	jeanc.executeForm(*tests);
	jeann.executeForm(*tests);
	std::cout << "---------------" << std::endl;
	test.makeForm("fail", "house");
}
