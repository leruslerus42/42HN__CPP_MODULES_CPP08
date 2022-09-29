/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:32:58 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/10 01:03:12 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack <T> {
    private:

        
    public:
        MutantStack() {};
        ~MutantStack() {};
        MutantStack(const MutantStack &copy) {*this = copy;};
        MutantStack  &operator= (const MutantStack &copy) {*this = copy; return (*this);};

        typedef typename std::stack <T>::container_type::iterator iterator;
        iterator begin(){return (this->c.begin());}
        iterator end()  {return (this->c.end());}
};

#endif