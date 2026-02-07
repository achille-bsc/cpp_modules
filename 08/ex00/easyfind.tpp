/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:39:52 by abosc             #+#    #+#             */
/*   Updated: 2026/02/05 15:31:02 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <algorithm>
#include <iostream>

const char *NovalueException::what() const throw()
{
	return ("Error: No value found");
}

template <typename T>
int easyfind(T& lst, int val)
{
	typename T::iterator it = find(lst.begin(), lst.end(), val);
	
	if (it == lst.end())
		throw NovalueException();
	return (*it);
}