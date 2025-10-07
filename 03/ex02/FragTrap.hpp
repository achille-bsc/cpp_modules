/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:54:51 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 15:12:42 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap	();
		FragTrap	(std::string name);
		FragTrap	(const FragTrap& other);
		~FragTrap	();
		
		FragTrap&	operator=		(const FragTrap& other);
		void		attack			(const std::string &target);
		void		highFivesGuys	(void);
};

#endif