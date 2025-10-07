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
	this->brain = new Brain();
	std::cout << "A new Cat have been created" << std::endl;
}

Cat::Cat(const Cat& other)
{
	this->type = other.type;
	this->brain = other.brain;
	std::cout << "A new Cat have been copied" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "A Cat have been erased of the existance" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}

	std::cout << "A Cat have been copied using an = operator" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou!" << std::endl;
}