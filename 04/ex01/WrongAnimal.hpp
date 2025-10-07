/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:05:41 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:59:14 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal				(void);
		WrongAnimal				(const WrongAnimal& other);
		WrongAnimal&			operator=(const WrongAnimal& other);
		virtual ~WrongAnimal	();

		std::string		getType() const;
		void			makeSound()	const;
};

#endif