/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 01:50:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/09 02:21:37 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/easyfind.hpp"

int main()
{
    std::list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    
    std::cout << easyfind(l, 3) << std::endl;
    std::cout << easyfind(l, 99) << std::endl;
    return 0;
}