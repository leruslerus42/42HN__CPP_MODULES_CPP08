/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 02:32:07 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/10 01:13:51 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <limits>

Span::Span(void){}

Span::Span(unsigned int N) : _size(N), _count(0), _minSpan(INT_MAX), _maxSpan(0)
{
	_ite = _l.end();
	for(_it=_l.begin(); _it != _ite; ++_it)
		_l.push_back(0);
		
}

Span::~Span(void){}

Span::Span(const Span &copy)
{
	_size = copy._size;
	_l = copy._l;
}

Span	&Span::operator = (const Span &copy)
{
	_size = copy._size;
	_l = copy._l;
	return (*this);
}

void Span::addNumber(int n)
{
	_count++;
	try{
		(_count <= _size ? _l.push_back(n) : throw Span::FullList());
	}
	catch (Span::FullList())
	{
		std::cerr << "Exception catched: List is alread full!" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void Span::printList()
{
	_ite = _l.end();
	for(_it=_l.begin(); _it != _ite; ++_it)
		std::cout << *_it << std::endl;
}
//handle negative numbers?
int Span::getSpan(int a, int b, char c)
{

	int _newSpan;
	//static int i = 0;//test
	
	_newSpan = (a > b ? a - b : b - a);

	if (c == 'l' && _newSpan > _maxSpan)
		_maxSpan = _newSpan;
	else if (c == 's' && _newSpan < _minSpan)
		_minSpan = _newSpan;

	//std::cout << "new span: " << _newSpan << " min span :" << _minSpan << std::endl;


	//std::cout << "Iteration number: " << i << " is " << _maxSpan << std::endl; i++;//test 
	// else if (c == 'L')
	// 	return (_maxSpan);
	// else if (c == 'S')
	// 	return (_minSpan);
	return (0);
}
	
/*ALWAYS 0, obwohl declariert as INT MAX*/
int Span::shortestSpan()
{

	int num = 0;
	int	i = 0;
	int j = 0;
	int temp = 0;
	if (_size < 2)
		throw Span::NoSpanFound();
		// for(_it=_l.begin(); _it != _ite; ++_it)
	// {
	// 	getSpan((*_it), (*_it+1), 's');

	// }
	
	while (j < _size-1)
	{
		_it = _l.begin();//or l[j]
		while (temp--)
			_it ++;
		num = *_it;
		_it ++;
		//std::cout << "ALPHA --- num: "<< num <<"*it"  << *_it << std::endl;

		while (i < _size - j - 2)
		{
			getSpan((*_it), (num), 's');
			*_it++;
			i++;
			//std::cout << "num: "<< num <<"*it"  << *_it << std::endl;
		}
		getSpan((*_it), (num), 's');
		i = 0;
		j++;
		temp = j;
		
	}
	//std:: cout << "Min Span ist: " << _minSpan << std::endl;
	return (_minSpan);
}

int Span::longestSpan()
{
	int num = 0;
	int	i = 0;
	int j = 0;
	int temp = 0;
	if (_size < 2)
		throw Span::NoSpanFound();

	while (j < _size-1)
	{
		_it = _l.begin();
		while (temp--)
			_it ++;
		num = *_it;
		_it ++;
		//std::cout << "ALPHA --- num: "<< num <<"*it"  << *_it << std::endl;
		while (i < _size - j - 2)
		{
			getSpan((*_it), (num), 'l');
			*_it++;
			i++;
			//std::cout << "num: "<< num <<"*it"  << *_it << std::endl;
		}
		getSpan((*_it), (num), 'l');
		i = 0;
		j++;
		temp = j;
	}
	//std:: cout << "Max Span is: " << _maxSpan << std::endl;
	return (_maxSpan);
}

