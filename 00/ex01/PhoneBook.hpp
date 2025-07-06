/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 01:16:57 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:09:31 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

class PhoneBook
{
    private:
        Contact         contacts[8];
        int             index;
        int             nbContacts;
    public:
        Contact    *getContacts();
        int         getIndex(); 
        int         getContactsNumber();
        void		addContact(Contact &contact);
        PhoneBook();
};