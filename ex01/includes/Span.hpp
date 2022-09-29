/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 02:37:52 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/10 01:14:26 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>

class Span
{
	private:
		/*private members*/
		std::list<int> 					_l;
		std::list<int>::const_iterator 	_it;
		std::list<int>::const_iterator 	_ite;
		int								_size;
		int								_count;
		int								_minSpan;
		int								_maxSpan;
	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(const Span &copy);

		Span	&operator = (const Span &copy);

		void addNumber(int n);
		void printList();
		int  getSpan(int a, int b, char c);
		int shortestSpan();
		int longestSpan();

		struct FullList : public std::exception {
			const char *what() const throw(){
				return ("Impossible to add a new element. The list is already full");
			}
		};

		struct NoSpanFound : public std::exception {
			const char *what() const throw(){
				return ("Impossible to add a new element. The list is already full");
			}
		};

		
};

#endif
