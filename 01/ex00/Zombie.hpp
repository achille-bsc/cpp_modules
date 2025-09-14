/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:34:05 by abosc             #+#    #+#             */
/*   Updated: 2025/09/14 18:13:57 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Zombie
{
    private:
        std::string     name;
    public:
        void            announce(void);
        Zombie(std::string name);
        ~Zombie();
};


Zombie  *newZombie(std::string name);