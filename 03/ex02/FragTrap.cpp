/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:29:27 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:24:37 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("(none)")
{
	this->hitPoints		=	100		;
	this->energyPoints	=	100		;
	this->attackDamage	=	30		;
	std::cout << "FragTrap " << this->name << " have been created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoints		=	100		;
	this->energyPoints	=	100		;
	this->attackDamage	=	30		;
	std::cout << "FragTrap " << this->name << " have been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor have been called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << " have been destroyed" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->energyPoints == 0)
		std::cout << "FragTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
	else
		std::cout << "FragTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " is now asking for a High Five\n\nHmmmmm... Let's do it" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		this->name			= other.name			;
		this->hitPoints		= other.hitPoints		;
		this->energyPoints	= other.energyPoints	;
		this->attackDamage	= other.attackDamage	;
	}
	std::cout << "FragTrap Copied by operator" << std::endl;
	return (*this);
}
