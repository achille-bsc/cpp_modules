/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:45:16 by marvin            #+#    #+#             */
/*   Updated: 2025/10/17 10:45:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(std::string name, const int _sign_required_grade, const int _exec_required_grade, bool is_signed) : name(name), is_signed(false)
{
	if (sign_required_grade > 150 || exec_required_grade > 150)
		throw Form::GradeTooLowException();
	if (sign_required_grade < 1 || exec_required_grade < 1)
		throw Form::GradeTooHighException();
	sign_required_grade = _sign_required_grade;
	exec_required_grade = _exec_required_grade;
}

Form::~Form()
{}

Form::GradeTooHighException::what() const throw()
{
	return ("Error: the grade is too High");
}

Form::GradeTooLowException::what() const throw()
{
	return ("Error: the grade is too Low");
}
