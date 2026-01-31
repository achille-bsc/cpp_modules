/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:31:47 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:10:48 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	:	AForm("PresidentialPardonForm", 25, 5),
		target("Random People")
{
	std::cout << "PresidentialPardonForm Default Constructor Called\n\r";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
	AForm("PresidentialPardonForm", 25, 5),
	target(target)
{
	std::cout << "PresidentialPardonForm Target Constructor Called\n\r";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	AForm("PresidentialPardonForm", 25, 5),
	target(other.target)
{
	std::cout << "PresidentialPardonForm Copy Constructor Called\n\r";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
		std::cout << "PresidentialPardonForm Destructor Called\n\r";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Assignement Overload Called\n\r";
    if (this != &other)
	{
		this->AForm::operator=(other);
		this->target = other.target;
	}
    return (*this);
}

void PresidentialPardonForm::exec() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}