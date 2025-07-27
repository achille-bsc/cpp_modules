/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:29:31 by abosc             #+#    #+#             */
/*   Updated: 2025/07/26 15:38:18 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:38:26 by abosc             #+#    #+#             */
/*   Updated: 2025/07/25 14:43:50 by abosc            ###   ########.fr       */
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
	// 	std::string	name;
	// 	int			hitPoints;
	// 	int			energiePoints;
	// 	int			attackDamage;
		
	// 	std::string	getName				(void);
	// 	int			getHitPoints		(void);
	// 	int			getEnergiePoints	(void);
	// 	int			getAttackDamage		(void);

	// 	void		setName				(std::string name);
	// 	void		setHitPoints		(int hitPoints);
	// 	void		setEnergiePoints	(int energiePoints);
	// 	void		setAttackDamage		(int attackDamage);

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


