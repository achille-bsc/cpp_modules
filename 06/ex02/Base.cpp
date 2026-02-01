/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:17:59 by abosc             #+#    #+#             */
/*   Updated: 2026/02/01 19:39:01 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <exception>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"	
#include "C.hpp"

Base::~Base() {}


Base*	generate(void)
{
	std::srand(std::time(0));
	int randNum = rand() % 3;
	if (randNum == 0)
		return (new A());
	else if (randNum == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch (const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B\n";
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C\n";
			}
			catch(const std::exception&)
			{
				return ;
			}
			
		}	
	}	
	
}

