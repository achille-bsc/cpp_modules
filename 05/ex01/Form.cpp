/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:37 by abosc             #+#    #+#             */
/*   Updated: 2026/01/24 13:22:56 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _grade_to_exec(grade_to_exec), _grade_to_sign(grade_to_sign)
{
	try
	{
		if (grade_to_sign > 150 || grade_to_exec > 150)
			throw Form::GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_exec < 1)
			throw Form::GradeTooHighException();
	}
	catch(std::exception e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

Form::Form(const Form &other) : _name(_name), _grade_to_sign(_grade_to_sign), _grade_to_exec(_grade_to_exec)
{}

Form::~Form()
{}

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
	os << "Name: ",						obj.getName(),
	"\nRequired Grade to Sign: ",		obj.getGradeToSign(),
	"\nRequired Grade to Execute: ",	obj.getGradeToExec(),
	"\nForm is Signed: ",				obj.getIsSigned();
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
