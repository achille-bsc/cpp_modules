/* ******************************************************************************** */
/*                                                                                  */
/*                                                  ░▒▓██████▓▒░░▒▓███████▓▒░       */
/*   Fixed.cpp                                      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*   By: Achille BOSC <achillebosc.dev@icloud.com>  ░▒▓████████▓▒░▒▓███████▓▒░      */
/*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*   Created: 2025/09/17 15:27 by AB                ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     */
/*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░      */
/*                                                                                  */
/* ******************************************************************************** */


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
	this->raw	= 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->raw	= other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->raw	= other.getRawBits();
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
	return (this->raw);
}

//////////////////////////////////
//                              //
//            SETTER            //
//                              //
//////////////////////////////////

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" <<  std::endl;
	this->raw = raw;
}

//////////////////////////////////
//                              //
//           METHODS            //
//                              //
//////////////////////////////////

/* No Methods */

