/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:08:43 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:04:38 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
    
	public:
		PresidentialPardonForm			();
		PresidentialPardonForm			(std::string target);
		PresidentialPardonForm			(const PresidentialPardonForm& other);
		PresidentialPardonForm&			operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm			();
		void exec						(void) const;

		// class GradeTooHighException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw();
		// };
		// class GradeTooLowException : public std::exception
		// {
		// 	public:
		// 		virtual const char* what() const throw();
		// };
		
};

std::ostream&		operator<<(std::ostream& os, const PresidentialPardonForm& obj);

#endif