/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 08:52:34 by abosc             #+#    #+#             */
/*   Updated: 2026/02/03 14:10:44 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdlib.h>
#include <stdexcept>

template <typename T>
class Array
{
	private:
	T*				array;
	unsigned int	_size;
	public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();
	
	Array&	operator=(const Array& other);
	T&		operator[](int i)			;
	T		operator[](int i)	const	;
	unsigned int size()			const	;
	
	
	class outOfBoundsException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
	
};

#include "Array.tpp"

#endif