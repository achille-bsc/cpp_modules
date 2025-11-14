/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 05:26:40 by abosc             #+#    #+#             */
/*   Updated: 2025/10/30 08:49:49 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#ifndef FORM_H
# define FORM_H

class AForm
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
		void			beSigned(Bureaucrat bureacrat);
		AForm			(std::string name, int grade_to_sign, int grade_to_exec);
		AForm			(const AForm& other);
		AForm&			operator=(const AForm& other);
		~AForm			();

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

std::ostream&		operator<<(std::ostream& os, const AForm& obj);


#endif