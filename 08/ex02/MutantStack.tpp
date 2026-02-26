/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:38:11 by abosc             #+#    #+#             */
/*   Updated: 2026/02/26 03:27:27 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &other) {
  std::cout << "Copy assignment operator called!" << std::endl;
  if (this == &other)
    return (*this);
  std::stack<T, Container>::operator=(other);
  return (*this);
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
  return this->c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
  return this->c.end();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const {
  return this->c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const {
  return this->c.end();
}