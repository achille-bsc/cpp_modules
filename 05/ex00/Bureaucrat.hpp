/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:25:20 by abosc             #+#    #+#             */
/*   Updated: 2025/10/07 21:56:29 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

class Bureaucrat
{
	private:
		std::string name;
		int			grade;
	public:
		Bureaucrat			(void);
		Bureaucrat			(const Bureaucrat& other);
		Bureaucrat&			operator=(const Bureaucrat& other);
		~Bureaucrat			();
		
		
};

#endif