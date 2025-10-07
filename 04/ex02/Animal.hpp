/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:20:31 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 18:09:55 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

#ifndef ANIMAL_H
# define ANIMAL_H

class Animal
{
	protected:
		std::string type;
	public:
		Animal			(void);
		Animal			(const Animal& other); // constructeur par copy
		Animal&			operator=(const Animal& other); // surcharge d'operateur
		virtual ~Animal	() = 0;

		std::string		getType()	const;
		virtual void	makeSound()	const;
};

#endif