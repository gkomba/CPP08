/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:06:48 by gildo             #+#    #+#             */
/*   Updated: 2025/10/14 10:30:46 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(20);   
    
    std::list<int> teste;
    int i = -1;
    try {
        sp.addNumberR(teste.begin(), teste.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;


    // sp.magicAddnumber(save.begin(), save.end())
}