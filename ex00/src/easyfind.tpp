/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:20:14 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 14:37:05 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "../includes/easyfind.hpp"


template <typename T>
int easyfind(T &container, int n)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return (*it);
    else
        throw std::runtime_error(RED "Error: " RESET "Element not found");
}

#endif
