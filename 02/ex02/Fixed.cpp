/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:40:59 by abosc             #+#    #+#             */
/*   Updated: 2025/07/24 11:48:02 by abosc            ###   ########.fr       */
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
}

Fixed::Fixed(const int fixedPoint)
{
	this->fpValue = fixedPoint * (1 << this->fractionnalBits);
}
Fixed::Fixed(const float floatingPoint)
{
	this->fpValue = roundf(floatingPoint * (1 << this->fractionnalBits));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed(void)
{
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


Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}
Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);	
}
Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);	
}
Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);		
}

//////////////////////////////////
//                              //
//          OVERLOADS           //
//                              //
//////////////////////////////////

// ASSIGNATIONS		OP
Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->fpValue = other.getFixedPoint();
	return (*this);
}

// COMPARISONS		OP
bool			Fixed::operator>	(const Fixed& other)
{
	return (this->fpValue > other.fpValue);
}

bool			Fixed::operator<	(const Fixed& other)
{
	return (this->toFloat() < other.toFloat());
}

bool			Fixed::operator>=	(const Fixed& other)
{
	return (this->toFloat() >= other.toFloat());
}

bool			Fixed::operator<=	(const Fixed& other)
{
	return (this->toFloat() <= other.toFloat());
}

bool			Fixed::operator==	(const Fixed& other)
{
	return (this->toFloat() == other.toFloat());
}

bool			Fixed::operator!=	(const Fixed& other)
{
	return (this->toFloat() != other.toFloat());
}

// ARITHMETIC		OP
float			Fixed::operator+	(const Fixed& other)
{
	return (this->toFloat() + other.toFloat());
}
float			Fixed::operator-	(const Fixed& other)
{
	return (this->toFloat() - other.toFloat());
}
float			Fixed::operator*	(const Fixed& other)
{
	return (this->toFloat() * other.toFloat());
}
float			Fixed::operator/	(const Fixed& other)
{
	return (this->toFloat() / other.toFloat());
}

// PRE-INCREMENTAL	OP
Fixed			Fixed::operator++	()
{
	this->fpValue++;
	return (*this);
}
Fixed			Fixed::operator--	()
{
	this->fpValue--;
	return (*this);
}

// POST-INCREMENTAL	OP
Fixed			Fixed::operator++	(int)
{
	Fixed temp = *this;
	this->fpValue++;
	return(temp);
}
Fixed			Fixed::operator--	(int)
{
	Fixed temp = *this;
	this->fpValue--;
	return(temp);	
}

// OSTREAM			OP
std::ostream    &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
