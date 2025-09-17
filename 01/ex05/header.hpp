/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:36:11 by abosc             #+#    #+#             */
/*   Updated: 2025/09/17 13:26:36 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

#define	DEBUG				"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define	INFO				"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define	WARNING				"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
#define	ERROR				"This is unacceptable! I want to speak to the manager now."

#define	ERROR_LEVEL_VALUE	"\033[31mError: Please Enter a valide value\033[0m"
#define	ERROR_TOO_FEW_ARGS	"\033[31mError: You need to enter at least 1 argument\033[0m"
#define	ERROR_TOO_MANY_ARGS	"\033[31mError: You need to enter at most 1 argument\033[0m"

#define	USAGE_EXAMPLE		"\033[36mUsage example:                 available arguments:\033[0m"
#define	ARGS_AVAILABLE		"./harl DEBUG                   [DEBUG, INFO, WARNING, ERROR]"

#define	LEVELS_NUMBER		4
