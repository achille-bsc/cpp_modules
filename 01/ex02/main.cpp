/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 03:38:25 by abosc             #+#    #+#             */
/*   Updated: 2025/06/29 03:56:24 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string =  "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
    std::cout << "string's adress : " << &string << std::endl;
    std::cout << "string's ptr adress : " << stringPTR << std::endl;
    std::cout << "string's ref adress : " << &stringREF << std::endl;
    std::cout << "string's value : " << string << std::endl;
    std::cout << "string's ptr adress : " << *stringPTR << std::endl;
    std::cout << "string's ref adress : " << stringREF << std::endl;
    
}