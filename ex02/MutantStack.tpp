/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:30:52 by gkomba            #+#    #+#             */
/*   Updated: 2025/10/15 10:56:12 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<class T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {}

template<class T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &obj): std::stack<T, Container>(obj) {}

template<class T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &obj)
{
    if (this != &obj)
        std::stack<T, Container>::operator=(obj);
    return (*this);
}

template<class T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    //
}

template<class T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
    return this->c.begin();
}

template<class T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
    return this->c.end();
}

template<class T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const
{
    return this->c.begin();
}

template<class T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const
{
    return this->c.end();
}
#endif