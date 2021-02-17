/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 02:09:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/17 14:25:03 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <ostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
private:
	std::vector<int> _vector;
	unsigned int _n;
public:
	
	Span();
	Span(unsigned int n);
	Span(const Span &);
	Span & operator=(const Span &);
	~Span();

	void addNumber(int n);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	class not_enough_elements: std::exception{
		virtual const char* what() const throw();
	};
};

#endif

// #include "Span.hpp"

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

void Span::addNumber(int n){
	if (_n == 0)
		throw std::out_of_range("Can't add more number.");
	_vector.push_back(n);
	_n--;
}
unsigned int Span::shortestSpan(){
	std::vector<int>::iterator it;
	std::vector<int>::iterator prev;
	int result;


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