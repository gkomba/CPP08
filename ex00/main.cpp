/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:32:37 by gildo             #+#    #+#             */
/*   Updated: 2025/10/14 03:37:08 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> numeros;

    numeros.push_back(8);
    numeros.push_back(1);
    numeros.push_back(3);
    numeros.push_back(62);
    numeros.push_back(310);
    numeros.push_back(32);

    try {
        ::easyfind(numeros, 62);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}