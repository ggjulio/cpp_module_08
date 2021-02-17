/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:29:09 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/17 14:34:15 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <algorithm>
#include <stdexcept>
#include "Span.hpp"

Span::Span():_n(0){}
Span::Span(unsigned int n): _n(n){}

Span::Span(const Span &other){
	*this = other;
}
Span & Span::operator=(const Span &other){
	_vector = other._vector;
	_n = other._n;
	return *this;
}
Span::~Span(){}

void Span::addNumber(int number){
	if (_vector.size()  >= _n)
		throw std::out_of_range("Can't add more number.");
	_vector.push_back(number);
}
unsigned int Span::shortestSpan(){
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	prev;
	int							result;

	std::sort(_vector.begin(), _vector.end());
	result = abs(_vector.at(0) - _vector.at(1));
	it = _vector.begin();
	prev = it;
	it++;
	while (it != _vector.end())
	{
		int tmp = abs(*prev - *it);
		if (tmp < result)
			result = tmp;
		it++;
		prev++;
	}	
	return result;
}
unsigned int Span::longestSpan(){
	std::sort(_vector.begin(), _vector.end());
	
	return (abs(_vector.front() - _vector.back()));
}

const char* Span::not_enough_elements::what() const throw(){
	return "2 or more arguments requiered.";
}