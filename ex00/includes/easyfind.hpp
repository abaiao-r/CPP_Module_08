/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:09:22 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 14:40:52 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <stdexcept>
# include "colours.hpp"


template <typename T>
int easyfind(T &container, int n);

/* this include is at the end of the file instead of the beginning because
** the compiler will complain about the function not being defined if it's
** included before the function is defined */
# include "../src/easyfind.tpp"
#endif
