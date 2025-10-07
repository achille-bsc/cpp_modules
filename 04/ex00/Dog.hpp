/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:56:22 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:01:05 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_H
# define DOG_H

class Dog : public Animal
{
	private:
		
	public:
		Dog		(void);
		Dog		(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog	();
		
		void 	makeSound() const;

};

#endif