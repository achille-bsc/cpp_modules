/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:29:31 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:21:34 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool guardingGate;

	public:
		ScavTrap				();
		ScavTrap				(std::string name);
		ScavTrap				(const ScavTrap& other);
		virtual		~ScavTrap	();
		ScavTrap&	operator=	(const ScavTrap& other);
		void		attack		(const std::string &target);
		void		guardGate	(void);
};

#endif


