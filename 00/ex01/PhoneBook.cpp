/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 01:16:49 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:12:47 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact     *PhoneBook::getContacts()
{
    return this->contacts;
}

int         PhoneBook::getIndex()
{
    return this->index;
}

int			PhoneBook::getContactsNumber()
{
    return this->nbContacts;
}

void        PhoneBook::addContact(Contact &contact)
{
	if (this->nbContacts < 8)
		this->nbContacts++;
    if (this->index >= 8)
        this->index = 0;
    this->contacts[this->index] = contact;
    this->index++;
}

PhoneBook::PhoneBook()
{
    index = 0;
    nbContacts = 0;
}