/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:38:23 by abosc             #+#    #+#             */
/*   Updated: 2025/07/26 15:58:14 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////////////////////////////
//                              //
//            HEADER            //
//                              //
//////////////////////////////////

#include "ClapTrap.hpp"
/* Your Code Here */


//////////////////////////////////
//                              //
//         CONSTRUCTORS         //
//                              //
//////////////////////////////////

ClapTrap::ClapTrap()
{
	this->name = "(none)";
	this->hitPoints		= 10;
	this->energiePoints	= 10;
	this->attackDamage	= 0	;
}

ClapTrap::ClapTrap(std::string name): name(name)
{
	this->hitPoints		= 10;
	this->energiePoints	= 10;
	this->attackDamage	= 0	;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
}



//////////////////////////////////
//                              //
//            GETTER            //
//                              //
//////////////////////////////////

std::string	ClapTrap::getName			(void)
{
	return (this->name);
}

int			ClapTrap::getHitPoints		(void)
{
	return (this->hitPoints);
}

int			ClapTrap::getEnergiePoints	(void)
{
	return (this->energiePoints);
}

int			ClapTrap::getAttackDamage	(void)
{
	return (this->attackDamage);
}



//////////////////////////////////
//                              //
//            SETTER            //
//                              //
//////////////////////////////////

void	ClapTrap::setName			(std::string name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints		(int hitPoints)
{
	this->name = hitPoints;
}

void	ClapTrap::setEnergiePoints	(int energiePoints)
{
	this->name = energiePoints;
}

void	ClapTrap::setAttackDamage	(int attackDamage)
{
	this->name = attackDamage;
}


//////////////////////////////////
//                              //
//           METHODS            //
//                              //
//////////////////////////////////

void ClapTrap::attack(const std::string& target)
{
	this->energiePoints--;
	std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	this->energiePoints--;
}


//////////////////////////////////
//                              //
//          OVERLOADS           //
//                              //
//////////////////////////////////

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->name			= other.name;
		this->hitPoints		= other.hitPoints;
		this->energiePoints	= other.energiePoints;
		this->attackDamage	= other.attackDamage;
	}
	return (*this);
}
