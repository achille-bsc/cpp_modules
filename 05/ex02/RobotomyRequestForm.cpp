/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:24:53 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 15:10:04 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
	AForm("RobotomyRequestForm", 72, 45),
	target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
	AForm("RobotomyRequestForm", 72, 45),
	target(other.target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!this->getIsSigned())
		throw (FormNotSigned());
    bool success = rand() % 2 == 0;

    std::cout << "... Some drilling Noise ..." << std::endl;
    
    if (success)
		std::cout << this->target << "has been robotomized successfully" << std::endl;
	else
		std::cout << "he robotomy failed" << std::endl;
}