/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:37 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 19:07:28 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

Form::Form(): _name("Random Form"), _grade_to_sign(150), _grade_to_exec(150), _is_signed(false)
{
	std::cout << "Default Constructor Called\n";
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : _name(name),_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	try
	{
		if (grade_to_sign > 150 || grade_to_exec > 150)
			throw Form::GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_exec < 1)
			throw Form::GradeTooHighException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Name, GradeToSign & GradeToExec Constructor Called\n";
}

Form::Form(const Form &other) : _name(other._name), _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec)
{
	std::cout << "Copy Constructor Called\n";
}

Form::~Form()
{
	std::cout << "Destructor Called";
}

//////////////
//EXCEPTIONS//
//////////////
const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too Low");
}

///////////
//GETTERS//
///////////
std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int Form::getGradeToExec() const
{
	return (this->_grade_to_exec);
}

bool Form::getIsSigned() const
{
	return (this->_is_signed);
}

/////////////
//OVERLOADS//
/////////////
std::ostream&	operator<<(std::ostream& os, const Form& obj)
{
	os << "Name: " << obj.getName()
	<< "\nRequired Grade to Sign: " << obj.getGradeToSign()
	<< "\nRequired Grade to Execute: " << obj.getGradeToExec()
	<< "\nForm is Signed: " << obj.getIsSigned();
	return (os);
}

/////////////
//FUNCTIONS//
/////////////
void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}
