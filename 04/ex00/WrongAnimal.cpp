/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:05:43 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:24:32 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal	(void): type("kebab")
{
	std::cout << "A WrongAnimal have been created" << std::endl;
}

WrongAnimal::WrongAnimal	(const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << "A WrongAnimal have been created by copy" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "A WrongAnimal have been copied by operator" << std::endl;

	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A WrongAnimal have been destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "A kebab don't make any sound... but you can eat it!" << std::endl;
}