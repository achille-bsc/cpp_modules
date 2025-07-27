/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:38:26 by abosc             #+#    #+#             */
/*   Updated: 2025/07/26 15:36:34 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
	protected:
			std::string	name;
			int			hitPoints;
			int			energiePoints;
			int			attackDamage;

		public:
			ClapTrap						();
			ClapTrap						(std::string name);
			ClapTrap						(const ClapTrap& other);
			~ClapTrap						();
			ClapTrap&	operator=			(const ClapTrap& other);
			std::string	getName				(void);
			int			getHitPoints		(void);
			int			getEnergiePoints	(void);
			int			getAttackDamage		(void);
			void		setName				(std::string name);
			void		setHitPoints		(int hitPoints);
			void		setEnergiePoints	(int energiePoints);
			void		setAttackDamage		(int attackDamage);
			
			void		attack				(const std::string& target);
			void		takeDamage			(unsigned int amount);
			void		beRepaired			(unsigned int amount);
};

#endif
