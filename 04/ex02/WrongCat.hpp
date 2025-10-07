/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:05:38 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:58:19 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_H
# define WRONGCAT_H

class WrongCat: public WrongAnimal
{
	private:
		
	public:
		WrongCat	(void);
		WrongCat	(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);
		~WrongCat	();
		
		void	makeSound()	const;
};

#endif