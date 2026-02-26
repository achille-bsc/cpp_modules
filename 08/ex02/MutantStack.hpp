/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:38:05 by abosc             #+#    #+#             */
/*   Updated: 2026/02/26 03:24:55 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	private:
	public:
						MutantStack		() : std::stack<T, Container>() {};
						~MutantStack	() {};
		
		MutantStack&	operator=		(const MutantStack& other);
		
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

        iterator    begin(void);
        iterator    end(void);

		const_iterator begin(void) const;
		const_iterator end(void) const;
};

#include "MutantStack.tpp"
#endif