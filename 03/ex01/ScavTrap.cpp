/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:44:56 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:24:19 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("(none)"), guardingGate(false)
{
	this->hitPoints		=	100;
	this->energyPoints	=	50;
	this->attackDamage	=	20;
	std::cout << "ScavTrap " << this->name << " have been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), guardingGate(false)
{
	this->hitPoints		=	100;
	this->energyPoints	=	50;
	this->attackDamage	=	20;
	std::cout << "ScavTrap " << this->name << " have been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	this->guardingGate = other.guardingGate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " have been destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " is attacking " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (this->energyPoints == 0)
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he's dead" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!this->guardingGate)
	{
		this->guardingGate = true;
		std::cout << this->name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " is already guarding the gate." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		this->name			= other.name;
		this->hitPoints		= other.hitPoints;
		this->energyPoints	= other.energyPoints;
		this->attackDamage	= other.attackDamage;
	}
	std::cout << "ScavTrap Copied by operator" << std::endl;
	return (*this);
}
