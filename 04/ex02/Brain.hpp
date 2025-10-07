/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:33:52 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 17:04:40 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_H
# define BRAIN_H

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain			(void);
		Brain			(const Brain& other);
		Brain&			operator=(const Brain& other);
		~Brain			(void);
		
		
};

#endif