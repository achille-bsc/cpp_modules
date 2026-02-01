/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:04:39 by abosc             #+#    #+#             */
/*   Updated: 2026/02/01 19:33:51 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	A a = A();
	B b = B();
	C c = C();

	identify(&a);
	identify(&b);
	identify(&c);
	
	std::cout << "-------------------\n";
	
	identify(a);
	identify(b);
	identify(c);

	std::cout << "-------------------\n";

	identify(generate());
	identify(*generate());
	return (0);
}