/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:46:49 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 17:56:54 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const size_t nbAnimals = 20;
	Animal* animals[nbAnimals] = {
		new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), // Dogs x10
		new Cat(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()  // Cats x10
	};

	for (size_t i = 0; i < nbAnimals; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;
	delete i;
	return 0;
}