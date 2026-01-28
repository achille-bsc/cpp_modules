/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:40 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 14:41:10 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class AForm
{
	private:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_exec;		
		bool 				_is_signed;
	public:
		std::string				getName()						const;
		int						getGradeToSign()				const;
		int						getGradeToExec()				const;
		bool					getIsSigned()					const;
		void					beSigned(Bureaucrat& bureaucrat);
		AForm					();
		AForm					(	std::string name,
									int grade_to_sign,
									int grade_to_exec
								);
		AForm					(const AForm& other);
		AForm&					operator=(const AForm& other);
		virtual ~AForm			() = 0;
		virtual void			execute(const Bureaucrat& executor) const = 0;

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
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
};

std::ostream&		operator<<(std::ostream& os, const AForm& obj);


#endif
