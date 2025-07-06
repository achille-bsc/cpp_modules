/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:01:40 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 04:40:03 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

class HumanB
{
	private:
		Weapon	*weapon;
		str		name;
	public:
		HumanB	(str name);
		void	attack() const;
        void    setWeapon(Weapon &weapon);
};