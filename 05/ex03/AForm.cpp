/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:37 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 19:18:05 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _grade_to_sign(1), _grade_to_exec(1), _is_signed(true)
{
	std::cout << "Default Constructor Called\n\r";
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec) : _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _is_signed(false)
{
	try
	{
		if (grade_to_sign > 150 || grade_to_exec > 150)
			throw AForm::GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_exec < 1)
			throw AForm::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\r";
	}
	std::cout << "Name & Grades constructor Called\n\r";
}

AForm::AForm(const AForm &other) : _name(other._name), _grade_to_sign(other._grade_to_sign), _grade_to_exec(other._grade_to_exec), _is_signed(other._is_signed)
{
	std::cout << "Copy Constructor Called\n\r";
}

AForm& AForm::operator=(const AForm& other)
{
	std::cout << "Assignment Operator Called\n\r";
	if (this != &other)
	{
		this->_is_signed = other._is_signed;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor Called\n\r";
}

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

const char* AForm::FormNotSigned::what() const throw()
{
	return ("Error: This form has not been signed");
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
	os << "Name: " << obj.getName()
	<< "\nRequired Grade to Sign: " << obj.getGradeToSign()
	<< "\nRequired Grade to Execute: " << obj.getGradeToExec()
	<< "\nForm is Signed: " << obj.getIsSigned();
	return (os);
}

/////////////
//FUNCTIONS//
/////////////
void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= getGradeToSign())
		this->_is_signed = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!this->_is_signed)
		throw FormNotSigned();
	else if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	else
		this->exec();
}