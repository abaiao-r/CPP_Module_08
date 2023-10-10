/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:44:36 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 19:42:55 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "../includes/MutantStack.hpp"

template <typename T>
class MutantStack;

/* Default constructor - Construct empty stack */
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T, std::deque<T> >()
{
    std::cout << CYAN << "MutantStack default constructor called" << RESET
        << std::endl;
}

/* Copy constructor - Constructs the container with the copy of the contents of 
** other */
template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> &src)
{
    std::cout << CYAN << "MutantStack copy constructor called" << RESET
        << std::endl;
    *this = src;
}

/* Destructor - Destroys the container object */
template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << RED << "MutantStack destructor called" << RESET
        << std::endl;
}

/* Operator= - Assigns new contents to the container, replacing its current 
** contents, and modifying its size accordingly */
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &src)
{
    std::cout << YELLOW << "MutantStack operator= called" << RESET
        << std::endl;
    if (this != &src)
        std::stack<T>::operator=(src);
    return *this;
}

/* begin - Returns an iterator pointing to the first element in the stack 
** container */
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::c.begin();
}

/* end - Returns an iterator referring to the past-the-end element in the 
** stack container */
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::c.end();
}


#endif
