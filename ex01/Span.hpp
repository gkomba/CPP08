/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:06:01 by gildo             #+#    #+#             */
/*   Updated: 2025/10/14 02:29:30 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <set>
#include <algorithm>
#include <exception>

class Span
{
    private:
        unsigned int N;
        std::set<int> save;
    public:
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();
        void    addNumber(int number);
        int     shortestSpan(void);
        int     longestSpan(void);
        int     addNumberR(int start, int end);
};

#endif