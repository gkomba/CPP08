/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:26:33 by gkomba            #+#    #+#             */
/*   Updated: 2025/10/14 14:47:10 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template<typename T>
class MutantStack
{
    private:
        std::stack<T> container;
    public:
        MutantStack();
        MutantStack(const MutantStack &obj);
        MutantStack &operator=(const MutantStack &obj);
        ~MutantStack();
        T&          top(void);
        const T&    top(void) const;
        bool        empty(void) const;
        void        push(const T &value);
        void        pop(void); 
};

#endif