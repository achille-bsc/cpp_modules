/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:29:27 by abosc             #+#    #+#             */
/*   Updated: 2025/07/26 16:49:40 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:38:23 by abosc             #+#    #+#             */
/*   Updated: 2025/07/25 14:43:46 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////////////////////////////
//                              //
//            HEADER            //
//                              //
//////////////////////////////////

#include "ScavTrap.hpp"
/* Your Code Here */


//////////////////////////////////
//                              //
//         CONSTRUCTORS         //
//                              //
//////////////////////////////////

ScavTrap::ScavTrap(): ClapTrap()
{
	this->hitPoints		=	100		;
	this->energiePoints	=	50		;
	this->attackDamage	=	20		;
	this->guardingGate	=	false	;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->hitPoints		=	100		;
	this->energiePoints	=	50		;
	this->attackDamage	=	20		;
	this->guardingGate	=	false	;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	this->guardingGate = other.guardingGate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Deconstructor for " << this->name << " called" << std::endl;
}



//////////////////////////////////
//                              //
//            GETTER            //
//                              //
//////////////////////////////////


//////////////////////////////////
//                              //
//            SETTER            //
//                              //
//////////////////////////////////



//////////////////////////////////
//                              //
//           METHODS            //
//                              //
//////////////////////////////////

void	ScavTrap::attack(const std::string &target)
{
	if (this->energiePoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks "
			<< target << ", causing " << this->attackDamage << " points of damage!"
			<< std::endl;
		this->energiePoints--;
	}
	else if (this->energiePoints == 0)
		std::cout << "\033[31mScavTrap " << this->name << " is not able to attack "
			<< target << ", because he has no energy points left.\033[0m"
			<< std::endl;
	else
		std::cout << "\033[31mScavTrap " << this->name << " is not able to attack "
			<< target << ", because he has not enough hit points.\033[0m"
			<< std::endl;
}

void ScavTrap::guardGate(void)
{
	if (!this->guardingGate)
	{
		this->guardingGate = true;
		std::cout << this->name << " is now in Gate keeper mode" << std::endl;
	}
	else
		std::cout << "\033[33mScavTrap " << this->name << " is already guarding the gate.\033[0m" << std::endl;
}

//////////////////////////////////
//                              //
//          OVERLOADS           //
//                              //
//////////////////////////////////

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		this->name			= other.name			;
		this->hitPoints		= other.hitPoints		;
		this->energiePoints	= other.energiePoints	;
		this->attackDamage	= other.attackDamage	;
	}
	return (*this);
}
