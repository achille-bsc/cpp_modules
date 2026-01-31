/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:09:49 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 17:42:37 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

////////////////
//Constructors//
////////////////
Bureaucrat::Bureaucrat(): name("random"), grade(150)
{
	std::cout << "Default constructor Called\n";
}

Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			grade = _grade;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Name & Grande Constructor Called\n\r";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : grade(other.grade), name(other.name)
{
	std::cout << "Copy Constructor Called\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor Called\n";
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
std::ostream&		operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
}

/////////////
//FUNCTIONS//
/////////////
void Bureaucrat::signForm(Form& form)
{

	try
	{
		if (form.getIsSigned())
		{
			std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because: this form is allready signed !" << std::endl;
			return ;
		}
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const GradeTooHighException& e)
	{
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because: " << e.what() << std::endl;
	}
	catch(const GradeTooLowException& e)
	{
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because: " << e.what() << std::endl;
	}	
}