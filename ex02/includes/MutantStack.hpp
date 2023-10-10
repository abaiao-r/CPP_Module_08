/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:34:57 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 19:41:38 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <vector>
# include <list>
# include <iostream>
# include <algorithm>
# include <iterator>
# include "colours.hpp"

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        MutantStack();
        MutantStack(MutantStack<T> &src);
        virtual ~MutantStack();

        MutantStack &operator=(MutantStack<T> const &src);

        // dque is the underlying container. Was chosen because it is the default
        // container for std::stack. It is a double-ended queue, so it has iterators
        // for both ends. We can use the deque's iterators to access the stack's
        typedef typename std::deque<T>::iterator iterator;

        iterator begin();
        iterator end();
};

# include "../src/MutantStack.tpp"

#endif
