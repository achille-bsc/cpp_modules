/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:17:06 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 21:00:54 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter					();
		ScalarConverter					(const ScalarConverter& other);
		ScalarConverter& operator=		(const ScalarConverter& other);
		~ScalarConverter				();
		static void checkStrType	(std::string str);
	public:
		static void   convert			(std::string literal);	
};