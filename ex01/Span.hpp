/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 02:09:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/17 03:11:46 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <ostream>
#include <vector>
#include <stdexception>

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
};

#endif

// #######################################################

// #include "Span.hpp"

Span::Span():_n(0){}
Span::Span(unsigned int n): _n(n){}

Span::Span(const Span &other){
	*this = other;
}
Span & Span::operator=(const Span &){
	
}
Span::~Span(){}

void Span::addNumber(int n){
	if (_n == 0)
		throw std::out_of_range();
	_vector.push_back(n);
	_n--;
}
unsigned int Span::shortestSpan(){
	int result;

	for (size_t i = 0; i < count; i++)
	{
		/* code */
	}
	
}
unsigned int Span::longestSpan(){
	
}
