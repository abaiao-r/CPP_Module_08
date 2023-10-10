/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:37:43 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/10/10 19:40:24 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main(void)
{
    {
        MutantStack<int> mstack;
        mstack.push(5);                             // push in deque container puts the element at the end. the dque now is: 5 the stack now is: 5
        mstack.push(17);                            // push in deque container puts the element at the end. the dque now is: 5 17 the stack now is: 5 17
        std::cout << mstack.top() << std::endl;     // top in deque container returns the last element. top is 17
        mstack.pop();                               // pop in deque container removes the last element. the dque now is: 5 the stack now is: 5                
        std::cout << mstack.size() << std::endl;    // size in deque container returns the number of elements. size is 1
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin(); // stores the iterator to the first element of the stack
        MutantStack<int>::iterator ite = mstack.end(); // stores the iterator to the last element of the stack
        ++it;                                          // it does not point to the first element anymore. it now points to the second element of the stack 
        --it;
        std::cout << "---------------------" << std::endl;
        std::cout << "stack: " << std::endl;
        std::cout << "---------------------" << std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    std::cout << "---------------------" << std::endl;
    {
        std::cout << "Test with list" << std::endl;

        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "---------------------" << std::endl;
        std::cout << "list: " << std::endl;
        std::cout << "---------------------" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::list<int> s(mstack);
    }
    std::cout << "---------------------" << std::endl;
    {
        std::cout << "Test with vstring" << std::endl;

        MutantStack<std::string> mstack;
        mstack.push("1 MUTANT");
        mstack.push("2 MUTANT");
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push("3 MUTANT");
        mstack.push("4 MUTANT");
        mstack.push("5 MUTANT");
        //[...]

        MutantStack<std::string>::iterator it = mstack.begin();
        MutantStack<std::string>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "---------------------" << std::endl;
        std::cout << "stack: " << std::endl;
        std::cout << "---------------------" << std::endl;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<std::string> s(mstack);
    }
    
    return 0;
}
