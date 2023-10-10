/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:18:55 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 15:23:43 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include "colours.hpp"

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _v;

    public:
        Span(void);
        Span(unsigned int n);
        Span(Span const &src);
        ~Span(void);

        Span &operator=(Span const &src);

        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan(void);
        int longestSpan(void);

        class FullException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class NoSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif