/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:39:53 by abosc             #+#    #+#             */
/*   Updated: 2026/02/05 15:14:04 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>

class NovalueException : public std::exception
{
	public:
		virtual const char *what() const throw();
};

template <typename T>
int	easyfind(T& lst, int val);

#include "easyfind.tpp"

#endif