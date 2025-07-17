/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:43:09 by abosc             #+#    #+#             */
/*   Updated: 2025/07/16 19:27:03 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//////////////////////////////////
//                              //
//            HEADER            //
//                              //
//////////////////////////////////

#include "Fixed.hpp"
#include <iostream>
/* Your Code Here */


//////////////////////////////////
//                              //
//         CONSTRUCTORS         //
//                              //
//////////////////////////////////

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->integer	= 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->integer	= other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->integer	= other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}


//////////////////////////////////
//                              //
//            GETTER            //
//                              //
//////////////////////////////////

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

//////////////////////////////////
//                              //
//            SETTER            //
//                              //
//////////////////////////////////

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" <<  std::endl;
	this->integer = raw;
}

//////////////////////////////////
//                              //
//           METHODS            //
//                              //
//////////////////////////////////

/* No Methods */

