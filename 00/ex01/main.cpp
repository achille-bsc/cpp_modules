/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 22:44:04 by abosc             #+#    #+#             */
/*   Updated: 2025/06/30 03:10:26 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header.hpp"

int	main()
{
	PhoneBook phoneBook;
	str line;

	while (std::cin)
	{
		std::cout << "Type ADD, SEARCH or EXIT : " << std::endl;
		std::getline(std::cin, line);

		if (str_equal(line, "ADD"))
			create_Contact(phoneBook);
		if (str_equal(line, "SEARCH"))
			search_contact(phoneBook);
		if (str_equal(line, "EXIT"))
			break ;
	}
	return (0);
}
