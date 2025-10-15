/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:06:01 by gildo             #+#    #+#             */
/*   Updated: 2025/10/14 17:04:37 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>
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
    void addNumber(int number);
    int shortestSpan(void);
    int longestSpan(void);
    template <typename Iterator>
    void addNumberBulk(Iterator start, Iterator end)
    {
        if (std::distance(start, end) + this->save.size() > this->N)
            throw std::runtime_error("Limit execeded while inserting sevaral elements");
        this->save.insert(start, end);
    }
};

#endif