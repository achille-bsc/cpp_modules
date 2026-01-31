/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:09:49 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 17:36:41 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

////////////////
//Constructors//
////////////////
Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade = _grade;
}

Bureaucrat::Bureaucrat(): name("random"), grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : grade(other.grade), name(other.name)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

//////////////
//EXCEPTIONS//
//////////////
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too Low");
}

///////////
//GETTERS//
///////////
std::string	Bureaucrat::getName() const
{
	return (this->name);	
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::gradePromotion()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;	
}

void	Bureaucrat::gradeDemotion()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

///////////////
// OVERLOADS //
///////////////
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
}

std::ostream&		operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}