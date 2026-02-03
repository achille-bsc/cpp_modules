/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 08:08:29 by abosc             #+#    #+#             */
/*   Updated: 2026/02/02 08:20:22 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T& v1, T& v2)
{
	T tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template <typename T>
T		min(T v1, T v2)
{
	return (v1 > v2 ? v2 : v1);
}

template <typename T>
T		max(T v1, T v2)
{
	return (v1 <= v2 ? v2 : v1);
}

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return (0);
}