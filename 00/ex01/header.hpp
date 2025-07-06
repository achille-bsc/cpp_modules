/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:45:49 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:07:03 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include <cstdlib>
// Types
typedef std::string str;

// Includes
#include "Contact.hpp"
#include "PhoneBook.hpp"

// Fonctions
bool str_equal(str str1, str str2);
bool verifAll(str name, str last, str nick, str phone, str secret);
void create_Contact(PhoneBook &phoneBook);
void search_contact(PhoneBook &phoneBook);

#endif