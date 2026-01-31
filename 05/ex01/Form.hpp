/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:40 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 17:46:21 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_exec;		
		bool 				_is_signed;
	public:
		std::string		getName()			const;
		int				getGradeToSign()	const;
		int				getGradeToExec()	const;
		bool			getIsSigned()		const;
		void			beSigned(Bureaucrat& bureacrat);
		Form			();
		Form			(std::string name, int grade_to_sign, int grade_to_exec);
		Form			(const Form& other);
		Form&			operator=(const Form& other);
		~Form			();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&		operator<<(std::ostream& os, const Form& obj);


#endif
