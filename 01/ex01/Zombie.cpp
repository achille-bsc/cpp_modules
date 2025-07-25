/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:34:02 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:36:49 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void            Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
	std::cout << "Be careful ! a new zombie is in the house !" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Viens de se faire tuer" << std::endl;
}