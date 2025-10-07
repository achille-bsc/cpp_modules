/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:21:54 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:33:16 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "A new Dog have been created" << std::endl;
}

Dog::Dog(const Dog& other)
{
	this->type = other.type;
	this->brain = other.brain;
	std::cout << "A new Dog have been copied" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A Dog have been erased of the existance" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}

	std::cout << "A Dog have been copied using an = operator" << std::endl;
	return (*this);
}


void 	Dog::makeSound() const
{
	std::cout << "Wafff!" << std::endl;
}
