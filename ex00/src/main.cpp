/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:37:43 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 14:52:34 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
    std::vector<int> v;

    v.push_back(1); // it places the element 1 at the end of the vector
    v.push_back(2);
    v.push_back(3);

    try
    {
        std::cout << easyfind(v, 3) << std::endl; // output: 3
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::cout << easyfind(v, 4) << std::endl; // output: Error: Element not found
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}