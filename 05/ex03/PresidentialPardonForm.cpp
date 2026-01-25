/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:31:47 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 14:41:32 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
	AForm("PresidentialPardonForm", 25, 5),
	target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	AForm("PresidentialPardonForm", 25, 5),
	target(other.target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    target = other.target;
    return *this;
}

void PresidentialPardonForm::execute()
{
	if (!this->getIsSigned())
		throw (FormNotSigned());
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}