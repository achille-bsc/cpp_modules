/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:33:49 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:28:06 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name)
{
    int		i = -1;
	Zombie	*horde = new Zombie[n];

	while (++i < n) {
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}