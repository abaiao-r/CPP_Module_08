/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:37:43 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 16:30:58 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main(void)
{
    {
        // test with 5 numbers
        std::cout << "Test with 5 numbers" << std::endl;
        Span sp = Span(5);
        sp.addNumber(-10);
        sp.addNumber(0);
        sp.addNumber(17);
        sp.addNumber(-2);
        sp.addNumber(11);

        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    {
        // add many numbers to the vector
        std::cout << "Test with 10000 numbers" << std::endl;
        Span sp = Span(10000);
        std::vector<int> v(10000);
        std::generate(v.begin(), v.end(), std::rand);
        sp.addNumber(v.begin(), v.end());

        //print the vector
/*         std::cout << "Vector: ";
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl; */

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    {
        // test with 1 number
        std::cout << "Test with 1 number" << std::endl;
        Span sp = Span(1);

        try
        {
            sp.addNumber(1);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    std::cout << "-------------------------" << std::endl;
    {
        // test with 0 number
        std::cout << "Test with 0 number" << std::endl;
        Span sp = Span(0);

        try
        {
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }
    std::cout << "-------------------------" << std::endl;
    {
        // test with 1000 numbers
        std::cout << "Test with 10001 numbers and 1000 capacity" << std::endl;
        Span sp = Span(1000);
        std::vector<int> v(10001);
        std::generate(v.begin(), v.end(), std::rand);

        try
        {
            sp.addNumber(v.begin(), v.end());
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        
    }

    return (0);
}