/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:24:03 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 16:12:08 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/* Default constructor*/
Span::Span(void) : _n(0)
{
    std::cout << CYAN << "Span default constructor called" << RESET 
        << std::endl;
}

/* Constructor with parameter*/
Span::Span(unsigned int n) : _n(n)
{
    std::cout << CYAN << "Span parameter constructor called" << RESET 
        << std::endl;
}

/* Copy constructor*/
Span::Span(Span const &src)
{
    std::cout << CYAN << "Span copy constructor called" << RESET 
        << std::endl;
    *this = src;
}

/* Destructor */
Span::~Span(void)
{
    std::cout << RED << "Span destructor called" << RESET << std::endl;
}

/* Assignment operator overload (Update) */
Span &Span::operator=(Span const &src)
{
    std::cout << BLUE << "Span assignment operator called" << RESET 
        << std::endl;
    if (this != &src)
    {
        this->_n = src._n;
        this->_v = src._v;
    }
    return (*this);
}

/* addNumber(int n): adds n to the vector */
void Span::addNumber(int n)
{
    if (this->_v.size() < this->_n)
        this->_v.push_back(n);
    else
        throw Span::FullException();
}

/* addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end):
 * adds the range of numbers to the vector */
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->_v.size() + std::distance(begin, end) <= this->_n)
        this->_v.insert(this->_v.end(), begin, end);
    else
        throw Span::FullException();
}

/* shortestSpan(void): returns the shortest span between two numbers in the vector
** example: [1, 2, 3, 4, 5] -> 1  or [1, 1, 1, 1, 1] -> 0 */
int Span::shortestSpan(void)
{
    int min;
    std::vector<int>::iterator it;
    std::vector<int> tmp;

    if (this->_v.size() < 2)
        throw Span::NoSpanException();
    tmp = this->_v;
    std::sort(tmp.begin(), tmp.end());
    min = tmp[1] - tmp[0];
    for (it = tmp.begin(); it != tmp.end() - 1; it++)
    {
        if (*(it + 1) - *it < min)
            min = *(it + 1) - *it;
    }
    return (min);
}

/* longestSpan(void): returns the longest span between two numbers in the vector
** example: [1, 2, 3, 4, 5] -> 4  or [1, 1, 1, 1, 1] -> 0 */
int Span::longestSpan(void)
{
    std::vector<int> tmp;

    if (this->_v.size() < 2)
        throw Span::NoSpanException();
    tmp = this->_v;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}

/* FullException class */
const char *Span::FullException::what() const throw()
{
    return ("Span is full, cannot add more numbers");
}

/* NoSpanException class */
const char *Span::NoSpanException::what() const throw()
{
    return ("No span to find, because there is less than 2 numbers in the vector");
}
