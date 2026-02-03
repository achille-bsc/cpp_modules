/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 08:24:38 by abosc             #+#    #+#             */
/*   Updated: 2026/02/02 09:33:08 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T, typename U, typename F>
void iter(T& array, const U size, F* func)
{
	int i = 0;

	while (i < size)
	{
		func(array[i]);
		i++;
	}
}

// Test functions
void	printInt(int x)
{
	std::cout << x << std::endl;
}

void	printFloat(float x)
{
	std::cout << x << std::endl;
}

void	printString(const std::string& str)
{
	std::cout << str << std::endl;
}

void	addTen(int& x)
{
	x += 10;
}

void	toUpperChar(char& c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
}

void	printChar(char c)
{
	std::cout << c << " ";
}

int main(void)
{
	std::cout << "=== Test 1: Array of ints ===" << std::endl;
	int intArray[] = {1, 2, 3, 4, 5};
	iter(intArray, 5, printInt);

	std::cout << "\n=== Test 2: Array of strings ===" << std::endl;
	std::string strArray[] = {"Hello", "World", "C++"};
	iter(strArray, 3, printString);

	std::cout << "\n=== Test 3: Modify int array ===" << std::endl;
	int modArray[] = {0, 1, 2, 3, 4};
	std::cout << "Before: ";
	iter(modArray, 5, printInt);
	iter(modArray, 5, addTen);
	std::cout << "After: ";
	iter(modArray, 5, printInt);

	std::cout << "\n=== Test 4: Array of chars ===" << std::endl;
	char charArray[] = {'a', 'b', 'c', 'd'};
	std::cout << "Before: ";
	iter(charArray, 4, printChar);
	iter(charArray, 4, toUpperChar);
	std::cout << "After: ";
	iter(charArray, 4, printChar);

	return (0);
}


