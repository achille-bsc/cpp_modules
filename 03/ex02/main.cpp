/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:42:41 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:26:00 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap TicTrap("Tic");
	FragTrap TacTrap("Tac");

	TicTrap.attack("Tac");
	TacTrap.takeDamage(5);
	TacTrap.beRepaired(3);

	FragTrap a("a");
	a.beRepaired(20);
	FragTrap b("b");
	b = a;
	a.beRepaired(0);
	b.beRepaired(5);

	TacTrap.highFivesGuys();
	TacTrap.highFivesGuys();
	std::cout << std::endl << std::endl << std::endl << std::endl;
	return (0);
}