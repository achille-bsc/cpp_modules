/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 17:00:25 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 17:00:28 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;

	public:
		ClapTrap				();
		ClapTrap				(std::string name);
		ClapTrap				(const ClapTrap& other);
		~ClapTrap				();
		ClapTrap&	operator=	(const ClapTrap& other);		
		void	attack			(const std::string& target);
		void	takeDamage		(unsigned int amount);
		void	beRepaired		(unsigned int amount);
};

#endif
