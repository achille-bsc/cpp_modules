/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:08:43 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 18:15:44 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
    
	public:
		RobotomyRequestForm				();
		RobotomyRequestForm				(std::string target);
		RobotomyRequestForm				(const RobotomyRequestForm& other);
		~RobotomyRequestForm			();
		void exec						(void) const;
		RobotomyRequestForm&			operator=(const RobotomyRequestForm& other);
};

std::ostream&		operator<<(std::ostream& os, const RobotomyRequestForm& obj);

#endif