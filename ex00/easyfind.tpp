/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gildo <gildo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 03:30:39 by gildo             #+#    #+#             */
/*   Updated: 2025/10/14 03:37:37 by gildo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include "easyfind.hpp"

template<typename T>
void    easyfind(T container, const int find)
{
    typename T::iterator i = std::find(container.begin(), container.end(), find);
    if (i != container.end())
    {   
        std::cout << "Finded " << *i << " on positon "
        << std::distance(container.begin(), i) << std::endl;
    }
    else
        throw std::runtime_error("Value not finded");
}

#endif