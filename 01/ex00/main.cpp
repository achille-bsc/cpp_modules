/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:33:25 by abosc             #+#    #+#             */
/*   Updated: 2025/09/14 18:27:50 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Achille");
    zombie->announce();
    delete zombie;
    Zombie *zombie2 = newZombie("Achille");
    zombie2->announce();
    delete zombie2;
    Zombie *zombie3 = newZombie("Achille");
    zombie3->announce();
    delete zombie3;
    Zombie *zombie4 = newZombie("Achille");
    zombie4->announce();
    delete zombie4;
    return (0);
}