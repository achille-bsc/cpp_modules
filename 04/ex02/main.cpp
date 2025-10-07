/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:46:49 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 18:10:42 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// the next line make an error if uncommented
	// const Animal* meta = new Animal();
	const Dog* j = new Dog();
	const Cat* i = new Cat();

	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// the next line make an error if uncommented
	// std::cout << meta->getType() << " " << std::endl;

	std::cout << std::endl;
	
	i->makeSound();
	j->makeSound();
	// the next line make an error if uncommented
	// meta->makeSound();

	std::cout << std::endl << std::endl << std::endl;
	

	// the next line make an error if uncommented
	// const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << std::endl;
	
	std::cout << i2->getType() << " " << std::endl;
	// the next line make an error if uncommented
	// std::cout << meta2->getType() << " " << std::endl;

	std::cout << std::endl;
	
	i2->makeSound();
	// the next line make an error if uncommented
	// meta2->makeSound();
	return 0;
}