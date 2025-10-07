/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:49:47 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:03:11 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap TicTrap("Tic");
	ScavTrap TacTrap("Tac");

	TicTrap.attack("Tac");
	TacTrap.takeDamage(5);
	TacTrap.beRepaired(3);

	ScavTrap a("a");
	a.beRepaired(20);
	ScavTrap b("b");
	b = a;
	a.beRepaired(0);
	b.beRepaired(5);

	TacTrap.guardGate();
	TacTrap.guardGate();
	std::cout << std::endl << std::endl << std::endl << std::endl;
	return (0);
}