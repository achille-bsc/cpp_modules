/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:48:55 by abosc             #+#    #+#             */
/*   Updated: 2026/01/25 15:12:56 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "AForm.hpp"
#include <iostream>

class Intern
{
	private:
		std::string formName;
		std::string target;
	public:
		Intern				();
		Intern				(const Intern& other);
		~Intern				();
		Intern&	operator=	(const Intern& other);
		AForm	*makeForm	(std::string formName, std::string target) const;

		class FormDoesntExist : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif