/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:17:05 by abosc             #+#    #+#             */
/*   Updated: 2026/01/31 21:28:31 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{ (void) other; }

ScalarConverter::~ScalarConverter()
{}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{ (void) other; return (*this); }

void ScalarConverter::convert(std::string str)
{
	ScalarConverter::checkStrType(str);
}