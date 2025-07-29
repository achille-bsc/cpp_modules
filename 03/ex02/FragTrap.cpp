/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:29:27 by abosc             #+#    #+#             */
/*   Updated: 2025/07/29 15:59:34 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////////////////////////////
//                              //
//            HEADER            //
//                              //
//////////////////////////////////

#include "FragTrap.hpp"
/* Your Code Here */


//////////////////////////////////
//                              //
//         CONSTRUCTORS         //
//                              //
//////////////////////////////////

FragTrap::FragTrap(): ClapTrap()
{
	this->hitPoints		=	100		;
	this->energiePoints	=	100		;
	this->attackDamage	=	30		;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hitPoints		=	100		;
	this->energiePoints	=	100		;
	this->attackDamage	=	30		;
}

FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor have been called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Deconstructor for " << this->name << " have been called" << std::endl;
}

//////////////////////////////////
//                              //
//           METHODS            //
//                              //
//////////////////////////////////

void	FragTrap::attack(const std::string &target)
{
	if (this->energiePoints > 0 && this->hitPoints > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks "
			<< target << ", causing " << this->attackDamage << " points of damage!"
			<< std::endl;
		this->energiePoints--;
	}
	else if (this->energiePoints == 0)
		std::cout << "\033[31mFragTrap " << this->name << " is not able to attack "
			<< target << ", because he has no energy points left.\033[0m"
			<< std::endl;
	else
		std::cout << "\033[31mFragTrap " << this->name << " is not able to attack "
			<< target << ", because he has not enough hit points.\033[0m"
			<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " is now asking for a High Five\n\nHmmmmm... Let's do it" << std::endl;
}

//////////////////////////////////
//                              //
//          OVERLOADS           //
//                              //
//////////////////////////////////

FragTrap& FragTrap::operator=(const FragTrap& other)
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
