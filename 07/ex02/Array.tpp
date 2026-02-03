/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 08:52:33 by abosc             #+#    #+#             */
/*   Updated: 2026/02/03 14:38:08 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
Array<T>::Array(): array(new T[0]), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n): array(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(const Array<T>& other)
{
	array = new T[other._size];
	_size = other._size;
	
	unsigned int i  = 0;
	while (i < _size)
	{
		array[i] = other.array[i];
		i++;
	}
}

template <typename T>
Array<T>::~Array()
{
	if (this->array)
		delete[](this->array);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (*this != other)
	{
		if (this->array)
			delete (this->array);
		this->array = new T[other._size];
		this->_size = other._size;
		
		unsigned int i  = 0;
		while (i < this->_size)
		{
			this->array[i] = other.array[i];
			i++;
		}
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](int i)
{
	if (i >= static_cast<int>(this->_size) || i < 0)
		throw outOfBoundsException();
	return (this->array[i]);
}

template <typename T>
T	Array<T>::operator[](int i) const
{
	if (i >= static_cast<int>(this->_size) || i < 0)
	return (this->array[i]);
}

template <typename T>
const char *Array<T>::outOfBoundsException::what() const throw()
{
	return ("Error: index out of bounds");
}