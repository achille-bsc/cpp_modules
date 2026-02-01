/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:16:03 by abosc             #+#    #+#             */
/*   Updated: 2026/02/01 16:49:55 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
int main(void)
{
	Data*		test = new Data();
	uintptr_t	testSerialized;
	Data*		result;
	
	test->counter	= 5;
	test->name		= "TestName";
	test->size		= 10;

	testSerialized = Serializer::serialize(test);
	std::cout << testSerialized << "\n";
	result = Serializer::deserialize(testSerialized);
	std::cout << result->name << "\n";
	std::cout << result->counter << "\n";
	std::cout << result->size << "\n";
	return (0);
}