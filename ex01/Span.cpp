/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkomba <gkomba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:12:39 by gildo             #+#    #+#             */
/*   Updated: 2025/10/14 14:16:37 by gkomba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): N(N) {}

Span::Span(const Span &obj)
{
    this->N = obj.N;
    this->save = obj.save;
}

Span &Span::operator=(const Span &obj)
{
    if (this != &obj)
    {
        this->N = obj.N;
        this->save = obj.save;
    }
    return (*this);
}

Span::~Span(void) {}

void    Span::addNumber(int number)
{
    if (this->save.size() >= this->N)
        throw std::runtime_error("No space left");
    this->save.insert(number);
}

int Span::longestSpan(void)
{
    if (this->save.size() <= 1)
        throw std::runtime_error("There is no suficient elements to find a Span");
    int span = *this->save.rbegin() - *this->save.begin();
    return (span);
}

int Span::shortestSpan(void)
{
    if (this->save.size() <= 1)
        throw std::runtime_error("There is no suficient elements to find a Span");
    int span = __INT_MAX__;
    int diferenca = 0;
    std::set<int>::iterator it = this->save.begin();
    std::set<int>::iterator next = it;
    ++next;
    for (; next != this->save.end(); it++, next++)
    {
        diferenca = *next - *it;
        if (diferenca < span)
        {
            span = diferenca;
        }
    }
    return (span);
}

void    Span::addNumberR(int start, int end)
{
    int i;

    if (start < end)
    {
        i = start;
        while (i <= end)
        {
            this->addNumber(i);
            i++;
        }
    }
    else
    {
        i = start;
        while (i >= end)
        {
            this->addNumber(i);
            i--;
        }
    }
}