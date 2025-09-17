/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:40:59 by abosc             #+#    #+#             */
/*   Updated: 2025/09/17 21:13:58 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////////////////////////////
//                              //
//            HEADER            //
//                              //
//////////////////////////////////

#include "Fixed.hpp"
#include <cmath>


//////////////////////////////////
//                              //
//         CONSTRUCTORS         //
//                              //
//////////////////////////////////

const int Fixed::fractionnalBits = 8;

Fixed::Fixed(): fpValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fixedPoint)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpValue = fixedPoint * (1 << this->fractionnalBits);
}
Fixed::Fixed(const float floatingPoint)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpValue = roundf(floatingPoint * (1 << this->fractionnalBits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}


//////////////////////////////////
//                              //
//            GETTER            //
//                              //
//////////////////////////////////

int		Fixed::getFixedPoint(void) const
{
	return (this->fpValue);
}


//////////////////////////////////
//                              //
//            SETTER            //
//                              //
//////////////////////////////////

void	Fixed::setFixedPoint(int const fixedPoint)
{ 
	this->fpValue = fixedPoint;
}


//////////////////////////////////
//                              //
//           METHODS            //
//                              //
//////////////////////////////////

float	Fixed::toFloat(void)	const
{
	return ((float)this->fpValue / (float)(1 << this->fractionnalBits));
}

int		Fixed::toInt(void)		const
{
	return (this->fpValue >> this->fractionnalBits);
}


//////////////////////////////////
//                              //
//          OVERLOADS           //
//                              //
//////////////////////////////////

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fpValue = other.getFixedPoint();
	return (*this);
}

std::ostream& operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
