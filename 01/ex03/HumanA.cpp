/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:01:33 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 04:40:03 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(str name, Weapon &weapon)
{
    this->name      = name;
    this->weapon    = &weapon;
}

void	HumanA::attack() const
{
	std::cout	<< name
				<< " attacks with their "
				<< weapon->getType()
				<< std::endl;
}