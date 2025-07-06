/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 23:49:10 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:07:34 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <cstdlib>
#include <iostream>
#include <ostream>

void create_Contact(PhoneBook &phoneBook) {
	Contact contact;
	str	line;
	
	
	
	std::cout << "Indiquez le nom du contact:" << std::endl;
	std::getline(std::cin, line);
	if (line.empty()) {
		std::cout << "Argument Invalide !" << std::endl;
		return;
	}
	contact.setName(line);
	std::cout << "Indiquez le nom de famille du contact:" << std::endl;
	std::getline(std::cin, line);
	if (line.empty()) {
		std::cout << "Argument Invalide !" << std::endl;
		return;
	}
	contact.setLast(line);
	std::cout << "Indiquez le surnom du contact:" << std::endl;
	std::getline(std::cin, line);
	if (line.empty()) {
		std::cout << "Argument Invalide !" << std::endl;
		return;
	}
	contact.setNick(line);
	std::cout << "Indiquez le Numero de Telephone du contact:" << std::endl;
	std::getline(std::cin, line);
	if (line.empty()) {
		std::cout << "Argument Invalide !" << std::endl;
		return;
	}
	contact.setPhone(line);
	std::cout << "Indiquez le plus lourd secret du contact:" << std::endl;
	std::getline(std::cin, line);
	if (line.empty()) {
		std::cout << "Argument Invalide !" << std::endl;
		return;
	}
	contact.setSecret(line);

	phoneBook.addContact(contact);
	
	std::cout << contact.getName() + "A bien ete rajoute aux contactes" << std::endl;
}

void printLine(str info)
{
	int infoSize = info.size();
	if (infoSize > 10)
	{
		std::cout << info.substr(0, 9) + ".";
	}
	else
	{
		for (int i = 0; i < 10 - infoSize; i++)
			std::cout << ' ';
		std::cout << info;
	}
	std::cout << '|';
}

void sepLine()
{
	std::cout << '|';
	for (int i = 0; i < 65; i++)
		std::cout << "―";
	std::cout << '|' << std::endl;
}

void	search_contact(PhoneBook &phoneBook)
{
	str	line;
	std::cout << "Voici la liste des contacts:" << std::endl << std::endl;
	sepLine();
	std::cout << "|     Index|       Nom| Nom de F.|    Surnom| Telephone|    Secret|" << std::endl;
	sepLine();
	for (int i = 0; i < phoneBook.getContactsNumber(); i++)
	{
		std::cout << '|';
		Contact c = phoneBook.getContacts()[i];
		std::cout << "         " << i + 1 << "|";
		printLine(c.getName());
		printLine(c.getLast());
		printLine(c.getNick());
		printLine(c.getPhone());
		printLine(c.getSecret());
		std::cout << std::endl;
		sepLine();
	}
	// 	std::cout << i + 1 << " | " 
	// 			  << ' ' * 10 - c.getName().size() << c.getName() << " | " 
	// 			  << c.getLast() << " | " 
	// 			  << c.getNick() << " | " 
	// 			  << c.getPhone() << " | "  
	// 			  << c.getSecret() << std::endl;
	// }

	std::cout << std::endl << "Veuillez entrer l'index du contact que vous souhaitez afficher:" << std::endl;
	std::getline(std::cin, line);
	
	if (line.empty() || !std::isdigit(line[0]) || atoi(line.c_str()) < 1 || atoi(line.c_str()) > phoneBook.getIndex()) {
		std::cout << "Index invalide." << std::endl;
		return;
	}
	std::cout << "Contact " << line << ":" << std::endl;
	Contact c = phoneBook.getContacts()[atoi(line.c_str()) - 1];
	std::cout << "Nom: " << c.getName() << std::endl;
	std::cout << "Nom de famille: " << c.getLast() << std::endl;
	std::cout << "Surnom: " << c.getNick() << std::endl;
	std::cout << "Numero de Telephone: " << c.getPhone() << std::endl;
	std::cout << "Secret: " << c.getSecret() << std::endl;
	std::cout << std::endl;
}