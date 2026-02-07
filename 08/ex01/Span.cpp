/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:36:32 by abosc             #+#    #+#             */
/*   Updated: 2026/02/05 18:09:42 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

#include <numeric>
#include <iostream>

Span::Span(): maxSize(0)
{}

Span::Span(unsigned int N): maxSize(N)
{}

Span::Span(const Span& other): lst(other.lst), maxSize(other.maxSize)
{}

Span::~Span()
{}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->lst		= other.lst;
		this->maxSize	= other.maxSize;
	}
	return (*this);
}


void Span::addNumber(int number)
{
	if (this->lst.size() == maxSize)
		throw std::exception();
	else
		this->lst.push_back(number);
}

int Span::shortestSpan()
{
	if (this->lst.size() < 2)
		throw std::runtime_error("Vous devez avoir au moins 2 valeurs dans la liste");

	std::vector<int> tmp = this->lst;
	std::sort(tmp.begin(), tmp.end());
	
	std::vector<int> diff(tmp.size());
	std::adjacent_difference(tmp.begin(), tmp.end(), diff.begin());
	
	return (*std::min_element(diff.begin() + 1, diff.end()));
}

int Span::longestSpan()
{
	if (this->lst.size() < 2)
		throw std::runtime_error("Vous devez avoir au moins 2 valeurs dans la liste");

	int min = *std::min_element(this->lst.begin(), this->lst.end());
	int max = *std::max_element(this->lst.begin(), this->lst.end());

	return (max - min);
}

void Span::addRandomNumbers()
{
	int i = 0;
	
	srand(time(0));
	
	while (i < 100000)
	{
		addNumber(rand());
		srand(rand());
		i++;
	}
}