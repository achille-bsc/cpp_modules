/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:36:34 by abosc             #+#    #+#             */
/*   Updated: 2026/02/05 18:05:43 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>
#include <stdexcept>
#include <numeric>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Span
{
	private:
		std::vector<int>	lst;
		unsigned int		maxSize;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void addRandomNumbers();
};

#endif