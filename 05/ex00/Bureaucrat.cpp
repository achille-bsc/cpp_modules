/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:09:49 by abosc             #+#    #+#             */
/*   Updated: 2025/10/16 14:24:30 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

////////////////
//Constructors//
////////////////
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
}

Bureaucrat::~Bureaucrat()
{}

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

void	Bureaucrat::gradeIncrement()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;	
}

void	Bureaucrat::gradeDecrement()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

/////////////
//OVERLOADS//
/////////////
std::ostream&		operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ",  bureaucrat grade " << obj.getGrade();
	return (os);
}