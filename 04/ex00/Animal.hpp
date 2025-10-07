/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 14:20:31 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:57:47 by abosc            ###   ########.fr       */
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
		Animal			(const Animal& other);
		Animal&			operator=(const Animal& other);
		virtual ~Animal	();

		std::string		getType()	const;
		virtual void	makeSound()	const;
};

#endif