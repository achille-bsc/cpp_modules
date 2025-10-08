/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:21:54 by abosc             #+#    #+#             */
/*   Updated: 2025/10/08 03:29:16 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("kebab")
{
	std::cout << "A new Animal have been created" << std::endl;
}

Animal::Animal(const Animal& other)
{
	this->type = other.type;
	std::cout << "A new animal have been copied" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal have been erased of the existance" << std::endl;
}
Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}

	std::cout << "An animal have been copied using an = operator" << std::endl;
	return (*this);
}

std::string		Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "A kebab don't make any sound... But you can eat it!" << std::endl;
}

