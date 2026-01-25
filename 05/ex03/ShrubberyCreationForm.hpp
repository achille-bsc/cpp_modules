/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 07:54:21 by abosc             #+#    #+#             */
/*   Updated: 2026/01/24 13:05:25 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include <fstream>

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
    
	public:
		ShrubberyCreationForm			(std::string target);
		ShrubberyCreationForm			(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&			operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm			();
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

std::ostream&		operator<<(std::ostream& os, const ShrubberyCreationForm& obj);

#endif