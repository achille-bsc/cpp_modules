/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:01:44 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 04:40:03 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <cstddef>

HumanB::HumanB(str name) : name(name)
{
    this->weapon = NULL;
}

void	HumanB::attack() const
{
	std::cout	<< name
				<< " attacks with their "
				<< (this->weapon != NULL ? weapon->getType() : "arm")
				<< std::endl;
}



void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}