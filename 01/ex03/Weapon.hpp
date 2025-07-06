/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:01:11 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 04:08:06 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

class Weapon
{
	private:
		str		type;
	public:
		str		getType(void) const;
		void	setType(str	type);
		Weapon	(str type);
};