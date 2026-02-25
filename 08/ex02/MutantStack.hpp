/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:38:05 by abosc             #+#    #+#             */
/*   Updated: 2026/02/25 16:19:19 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack
{
	private:
	public:
						MutantStack		() : std::stack<T, Container>() {};
						~MutantStack	() {};
		
		MutantStack&	operator=		(const MutantStack& other);
		
		typedef typename Container::iterator iterator;

        iterator    begin(void);
        iterator    end(void);
		
};

#include "MutantStack.tpp"
#endif