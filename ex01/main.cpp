/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 02:29:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/10 01:14:22 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(111);
	sp.addNumber(111);
	sp.printList();
	std::cout << sp.shortestSpan() << std::endl;//implement overloaded <<
	std::cout << sp.longestSpan() << std::endl;


	/*fill list with 10.000 random values*/	
	/*Span sp2 = Span(10000);

	int num;
	srand(time(NULL));
	for (unsigned int i; i < 10000; i++)
	{
		num = rand() ;
		sp2.addNumber(num);
	}
	//sp2.printList();

	sp2.shortestSpan();
	sp2.longestSpan();*/

	return (0);
}