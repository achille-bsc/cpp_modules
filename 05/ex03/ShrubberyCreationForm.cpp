/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:30:36 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:28:00 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:	AForm("ShrubberyCreationForm", 145, 137),
		target("Any Random Tharget")
{
	std::cout << "ShrubberyCreationForm Default Constructor Called\n\r";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
	AForm("ShrubberyCreationForm", 145, 137),
	target(target)
{
	std::cout << "ShrubberyCreationForm Target Constructor Called\n\r";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	AForm("ShrubberyCreationForm", 145, 137),
	target(other.target)
{
	std::cout << "ShrubberyCreationForm Copy Constructor Called\n\r";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor Called\n\r";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		this->AForm::operator=(other);
		target = other.target;
	}
    return (*this);
}

void ShrubberyCreationForm::exec(void) const
{
    std::string asciiTree;
	std::string temp;
	std::ofstream File((target + "_shrubbery").c_str());
	
	File << 
		"       _-_\n"
		"    /~~   ~~\\\n"
		" /~~         ~~\\\n"
		"{               }\n"
		" \\  _-     -_  /\n"
		"   ~  \\\\ //  ~\n"
		"_- -   | | _- _\n"
		"  _ -  | |   -_\n"
		"      // \\\\\n";

	File.close();
}