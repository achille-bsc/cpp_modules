/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:01:18 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 04:13:35 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(str type) : type(type)
{
}

str	Weapon::getType(void) const
{
	return this->type;
}

void	Weapon::setType(str	type)
{
	this->type = type;
}