/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:08:43 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 14:32:25 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include <fstream>

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
    
	public:
		PresidentialPardonForm			(std::string target);
		PresidentialPardonForm			(const PresidentialPardonForm& other);
		PresidentialPardonForm&			operator=(const PresidentialPardonForm& other);
		~PresidentialPardonForm			();
		void execute					();

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