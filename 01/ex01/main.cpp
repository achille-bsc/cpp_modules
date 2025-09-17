/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:33:25 by abosc             #+#    #+#             */
/*   Updated: 2025/09/15 15:46:37 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	*horde = zombieHorde(5, "Achiiiiiiilllleeeeuuuhhh");
	
	int i = 0;
	while(i < 5)
	{
		horde[i].announce();
		i++;	
	}

	delete []horde; 
	return 0;
}