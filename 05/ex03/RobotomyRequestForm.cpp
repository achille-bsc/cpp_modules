/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:24:53 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:18:11 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	:	AForm("RobotomyRequestForm", 72, 45),
		target("Any Random Target")
{
	std::cout << "RobotomyRequestForm Default Constructor Called\n\r";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
	AForm("RobotomyRequestForm", 72, 45),
	target(target)
{
	std::cout << "RobotomyRequestForm Target Constructor Called\n\r";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
	AForm("RobotomyRequestForm", 72, 45),
	target(other.target)
{
	std::cout << "RobotomyRequestForm Copy Constructor Called\n\r";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor Called\n\r";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm \"=\" Operator Overload Called\n\r";
    if (this != &other)
	{
		this->AForm::operator=(other);
		this->target = other.target;
	}
    return (*this);
}

void RobotomyRequestForm::exec() const
{
    bool success = (rand() % 2 == 0);

    std::cout << "... Some drilling Noise ..." << std::endl;
    
    if (success)
		std::cout << this->target << "has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}