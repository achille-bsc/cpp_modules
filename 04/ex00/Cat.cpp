/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:21:54 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:33:16 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "A Cat have been created" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	std::cout << "A Cat have been copied" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A Cat have been destroyed" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}

	std::cout << "A Cat have been copied by operator" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
}