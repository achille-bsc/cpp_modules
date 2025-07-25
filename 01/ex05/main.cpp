/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42lehavre.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:32:41 by abosc             #+#    #+#             */
/*   Updated: 2025/07/16 15:12:13 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(int argc, char **argv)
{
	Harl	theUltimeHarl;
	
	if (argc < 2)
	{
		std::cout << ERROR_TOO_FEW_ARGS << std::endl << std::endl;
		std::cout << USAGE_EXAMPLE << std::endl;
		std::cout << ARGS_AVAILABLE << std::endl;
		return (1);
	}
	if (argc > 2)
	{
		std::cout << ERROR_TOO_MANY_ARGS << std::endl << std::endl;
		std::cout << USAGE_EXAMPLE << std::endl;
		std::cout << ARGS_AVAILABLE << std::endl;
		return (1);
	}
	
	theUltimeHarl.complain(argv[1]);

	return (1);
}