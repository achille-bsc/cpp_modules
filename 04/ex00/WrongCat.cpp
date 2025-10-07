/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:05:35 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:54:15 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat	(void): WrongAnimal()
{
	this->type = "Cat";
	std::cout << "A WrongCat have been created" << std::endl;
}

WrongCat::WrongCat	(const WrongCat& other)
{
	this->type = other.type;
	std::cout << "A WrongCat have been created by copy" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "A WrongCat have been copied by operator" << std::endl;

	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat have been destroyed" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
}