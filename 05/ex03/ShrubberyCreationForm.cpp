/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 12:30:36 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 14:43:16 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
	AForm("ShrubberyCreationForm", 145, 137),
	target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	AForm("ShrubberyCreationForm", 145, 137),
	target(other.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    target = other.target;
    return *this;
}

void ShrubberyCreationForm::execute()
{
	if (!this->getIsSigned())
		throw (FormNotSigned());
    std::string asciiTree;
	std::string temp;
	std::ofstream File((target + "_shrubbery").c_str());
	std::ifstream asciiFile("asciiTree.txt");

	while(getline(asciiFile, temp))
		asciiTree += temp + '\n';
	asciiFile.close();
	
	File << asciiTree << std::endl;

	File.close();
}