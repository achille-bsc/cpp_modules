/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:59:43 by abosc             #+#    #+#             */
/*   Updated: 2025/09/26 17:17:01 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A brain have been created" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "A brain have been copied" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	std::cout << "A brain have been assigned" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "A brain have been deleted" << std::endl;
}