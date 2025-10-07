/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:56:19 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 16:35:39 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_H
# define CAT_H

class Cat : public Animal
{
	private:
		Brain*	brain;	
	public:
		Cat		(void);
		Cat		(const Cat& other);
		Cat&	operator=(const Cat& other);
		~Cat	();
		
		void 	makeSound() const;
	
};

#endif