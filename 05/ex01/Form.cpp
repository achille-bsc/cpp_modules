/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:37 by abosc             #+#    #+#             */
/*   Updated: 2025/11/17 14:08:27 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _grade_to_exec(grade_to_exec), _grade_to_sign(grade_to_sign)
{
	try
	{
		if (grade_to_sign > 150 || grade_to_exec > 150)
			throw AForm::GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_exec < 1)
			throw AForm::GradeTooHighException();
	}
	catch(std::exception e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

AForm::AForm(const AForm &other) : _name(_name), _grade_to_sign(_grade_to_sign), _grade_to_exec(_grade_to_exec)
{}

AForm::~AForm()
{}

//////////////
//EXCEPTIONS//
//////////////
const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too Low");
}

///////////
//GETTERS//
///////////
std::string AForm::getName() const
{
	return (this->_name);
}

int AForm::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int AForm::getGradeToExec() const
{
	return (this->_grade_to_exec);
}

bool AForm::getIsSigned() const
{
	return (this->_is_signed);
}

/////////////
//OVERLOADS//
/////////////
std::ostream&	operator<<(std::ostream& os, const AForm& obj)
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
void	AForm::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}
