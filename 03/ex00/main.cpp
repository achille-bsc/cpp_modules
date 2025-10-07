/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:25:36 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 14:39:48 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap TicTrap("Tic");
	ClapTrap TacTrap("Tac");
	TicTrap.attack("Tac");
	TacTrap.takeDamage(5);
	TacTrap.beRepaired(3);

	ClapTrap a("a");
	a.beRepaired(20);
	ClapTrap b("b");
	b = a;
	a.beRepaired(0);
	b.beRepaired(5);

	return (0);
}