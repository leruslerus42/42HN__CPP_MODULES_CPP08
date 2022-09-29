/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:45:06 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/09 02:27:08 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>


template<typename T>
int   easyfind(T l, int n)
{
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator ite = l.end();
    
    
    for (it = l.begin(); it != ite; ++it)
    {
        if (*it == n)
            return (*it);
    }
    std:: cout << "Integer not present in container!" << std::endl;
    exit(EXIT_FAILURE);
}
