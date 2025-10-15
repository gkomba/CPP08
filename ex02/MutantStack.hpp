/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:26:33 by gkomba            #+#    #+#             */
/*   Updated: 2025/10/15 04:52:49 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <deque>

template <class T,  typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
    
    MutantStack();
    MutantStack(const MutantStack &obj);
    MutantStack &operator=(const MutantStack &obj);
    ~MutantStack();
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
};

#include "MutantStack.tpp"


#endif