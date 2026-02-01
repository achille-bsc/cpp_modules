/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:04:41 by abosc             #+#    #+#             */
/*   Updated: 2026/02/01 15:41:24 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <limits.h>
#include <cfloat>
#include <cstdlib>
#include <sstream>

bool needDotZ(double nb)
{
	std::ostringstream oss;
	oss << nb;
	std::string str = oss.str();
	int i = 0;
	if (str == "inf" || str == "-inf" || str == "+inf" || str == "nan")
		return (false);
	while (str[i] && str[i] != '.')
		i++;
	if (str[i] == '.')
		return (false);
	return (true);
}

void writeChar(char c)
{
	std::cout << "char: '"	<< c							<< "'\n";
	std::cout << "int: "	<< static_cast<int>(c)			<< '\n';
	std::cout << "float: "	<< static_cast<float>(c)		<< ".0f\n";
	std::cout << "double: "	<< static_cast<double>(c)		<< ".0\n";
}

bool isInt(std::string str)
{
	int	i		= 0;
	
	if (str[0] == '+' || str[0] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	long lnb = atol(str.c_str());
	if (lnb > INT_MAX || lnb < INT_MIN)
		return (false);
	return (true);
}

void writInt(std::string str)
{
	int		nb	= atoi(str.c_str());
	char	c	= static_cast<char>(nb);
	bool 	doNeedDootZ = needDotZ(nb);
	
	if (nb > CHAR_MAX || nb < CHAR_MIN)
		std::cout	<< "char: impossible\n";
	else if (isprint(c))
		std::cout	<< "char: '"		<< c						<< "'\n";	
	else
		std::cout	<< "char: "		<< "Non displayable"		<< '\n';

	std::cout		<< "int: "		<< nb						<< "\n";
	std::cout		<< "float: "	<< static_cast<float>(nb)	<< (doNeedDootZ ? ".0f\n" : "f\n");
	std::cout		<< "double: "	<< static_cast<double>(nb)	<< (doNeedDootZ ? ".0\n" : "\n");
}

bool isFloat(std::string str)
{
	int i		= 0;
	int dots	= 0;

	if (str[str.length() - 1] != 'f')
		return (false);
	
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (false);
	while (str[i])
	{
		if (str[i] == '.')
		{
			if (!str[i + 1] || !isdigit(str[i + 1]))
				return (false);
			dots++;
		}
		if (!isdigit(str[i]) && str[i] != '.' && i != (int)str.length() - 1)
			return (false);
		i++;
	}
	if (dots != 1)
		return (false);

	return (true);
}

void writeFloat(std::string str)
{
	float	fnb = strtof(str.c_str(), NULL);
	char	c	= static_cast<char>(fnb);
	bool 	doNeedDootZ = needDotZ((double)fnb);

	if (fnb > CHAR_MAX || fnb < CHAR_MIN)
		std::cout	<< "char: impossible\n";
	else if (isprint(c))
		std::cout	<< "char: '"		<< c							<< "'\n";	
	else
		std::cout	<< "char: "		<< "Non displayable"			<< '\n';
		
	if (static_cast<double>(fnb) > INT_MAX || static_cast<double>(fnb) < INT_MIN)
		std::cout		<< "int: "		<< "impossible"				<< '\n';
	else
		std::cout		<< "int: "		<< static_cast<int>(fnb)	<< '\n';
	
	std::cout			<< "float: "	<< fnb						<< (doNeedDootZ ? ".0f\n" : "f\n");

	std::cout			<< "double: "	<< static_cast<double>(fnb)	<< (doNeedDootZ ? ".0\n" : "\n");
}

bool	isDouble(std::string str)
{
	int i		= 0;
	int dots	= 0;

	if (!isdigit(str[str.length() - 1]))
		return (false);

	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!isdigit(str[i]))
		return (false);
	while (str[i])
	{
		if (str[i] == '.')
			dots++;
		if (!isdigit(str[i]) && str[i] != '.')
			return (false);
		i++;
	}
	if (dots != 1)
		return (false);
	return (true);
}

void	writeDouble(std::string str)
{
	double	dnb = strtod(str.c_str(), NULL);
	char	c	= static_cast<char>(dnb);
	bool 	doNeedDootZ = needDotZ((double)dnb);
	
	if (dnb > CHAR_MAX || dnb < CHAR_MIN)
		std::cout	<< "char: impossible\n";
	else if (isprint(c))
		std::cout	<< "char: '"		<< c							<< "'\n";	
	else
		std::cout	<< "char: "		<< "Non displayable"			<< '\n';
		
	if (dnb > INT_MAX || dnb < INT_MIN)
		std::cout		<< "int: "		<< "impossible"				<< '\n';
	else
		std::cout		<< "int: "		<< static_cast<int>(dnb)	<< '\n';
	
	if (dnb > FLT_MAX)
		std::cout		<< "float: "	<< "inff"				<< '\n';
	else if (dnb < -FLT_MAX - 1)
		std::cout		<< "float: "	<< "-inff"				<< '\n';
	else
		std::cout		<< "float: "	<< static_cast<float>(dnb)	<< ((doNeedDootZ ? ".0f\n" : "f\n"));

	std::cout			<< "double: "	<< dnb						<< (doNeedDootZ ? ".0\n" : "\n");
}

bool	isLiteral(std::string str)
{
	if (	str == "inff"
		||	str == "+inff"
		|| 	str == "-inff"
		||	str == "inf"
		||	str == "+inf"
		||	str == "-inf"
		|| 	str == "nan"
		|| 	str == "nanf"
	)
		return (true);
	return (false);
}

void writeLiteral(std::string str)
{
	if (!str.compare("inff") || !str.compare("+inff") || !str.compare("-inff") || !str.compare("nanf"))
	{
		float fnb = strtof(str.c_str(), NULL);
		std::cout << "int: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << static_cast<float>(fnb) << "f\n";
		std::cout << "double: " << static_cast<double>(fnb) << "\n";
	}
	else
	{
		double dnb = strtod(str.c_str(), NULL);
		std::cout << "int: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: " << static_cast<float>(dnb) << "f\n";
		std::cout << "double: " << static_cast<double>(dnb) << "\n";
	}
}


void	ScalarConverter::checkStrType(std::string str)
{
	if (isprint(str[0]) && !isdigit(str[0]) && str.length() == 1)
		writeChar(str[0]);
	else if (isInt(str))
		writInt(str);
	else if (isFloat(str))
		writeFloat(str);
	else if (isDouble(str))
		writeDouble(str);
	else if (isLiteral(str))
		writeLiteral(str);
	else
		std::cout  << "Vous devez donner une entree valide tel qu'un char, un Int, un Float ou un Double\n";
	// else if (isdigit(str[0]) || str[0] == '+' || str[0] == '-')
	// 	writeDouble(str);
}