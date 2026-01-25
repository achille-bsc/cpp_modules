/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:08:43 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 14:22:29 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include <fstream>

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
    
	public:
		RobotomyRequestForm			(std::string target);
		RobotomyRequestForm			(const RobotomyRequestForm& other);
		RobotomyRequestForm&			operator=(const RobotomyRequestForm& other);
		~RobotomyRequestForm			();
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

std::ostream&		operator<<(std::ostream& os, const RobotomyRequestForm& obj);

#endif