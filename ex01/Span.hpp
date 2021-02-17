/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 02:09:48 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/17 14:29:54 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>

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
