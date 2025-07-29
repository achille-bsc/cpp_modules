/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:29:31 by abosc             #+#    #+#             */
/*   Updated: 2025/07/29 15:49:58 by abosc            ###   ########.fr       */
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


