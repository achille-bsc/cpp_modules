/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 21:52:26 by abosc             #+#    #+#             */
/*   Updated: 2025/06/24 22:38:44 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

char *upperStr(char *str)
{
	int i = 0;
	while(str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

void printErr()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return ;
}

int main(int argc, char **argv)
{
	if (argc == 1)
		return (printErr(), 1);
	for (int i = 1; i < argc; i++)
	{
		std::cout << upperStr(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}