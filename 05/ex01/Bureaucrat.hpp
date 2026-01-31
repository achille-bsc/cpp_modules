/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:25:20 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 17:42:58 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat			();
		Bureaucrat			(std::string name, int grade);
		Bureaucrat			(const Bureaucrat& other);
		Bureaucrat&			operator=(const Bureaucrat& other);
		~Bureaucrat			();
		std::string			getName() const;
		int					getGrade() const;
		void				gradePromotion();
		void				gradeDemotion();
		void				signForm(Form& form);

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

std::ostream&		operator<<(std::ostream& os, const Bureaucrat& obj);

#endif