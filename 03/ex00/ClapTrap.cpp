/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:13:25 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 14:37:51 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << " have been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap " << this->name << " have been created by copy" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " have been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap doesn't have enough energy to attack " << target << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " can't take damage... because he is dead" << std::endl;
	}
	else if (this->hitPoints > amount)
	{
		this->hitPoints -= amount;
		std::cout << this->name << " just took " << amount << " damages" << std::endl;
	}	
	else if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << this->name << " just died" << std::endl;	
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << this->name << " can't be repaired because of he's dead" << std::endl;
	}
	else
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << this->name << " have been repaired. (+" << amount << ") He has now " << this->hitPoints << " hit points" << std::endl;
	}
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->name			= other.name;
		this->hitPoints		= other.hitPoints;
		this->energyPoints	= other.energyPoints;
		this->attackDamage	= other.attackDamage;
	}
	std::cout << "Clap Trap Copied by operator" << std::endl;
	return (*this);
}
