/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:44:54 by abosc             #+#    #+#             */
/*   Updated: 2026/02/01 16:29:15 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer& other)
{ (void)other; }

Serializer::~Serializer()
{}

Serializer& Serializer::operator=(const Serializer& other)
{ (void)other; return (*this); }

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t ptr)
{
	return (reinterpret_cast<Data*>(ptr));
}