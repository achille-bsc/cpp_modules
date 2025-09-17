/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:34:05 by abosc             #+#    #+#             */
/*   Updated: 2025/09/14 18:35:17 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string     name;
    public:
        void            setName(std::string name);
        void            announce(void);
        Zombie();
        ~Zombie();
};


Zombie  *newZombie();
Zombie  *zombieHorde(int n, std::string name);
