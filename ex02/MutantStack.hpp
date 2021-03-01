/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:57:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/03/01 09:14:27 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename Container::iterator iterator;
	
	MutantStack(){}
	MutantStack(const MutantStack<T> & other){
		*this = other;
	}
	MutantStack<T> & operator=(const MutantStack<T> & other){
		this->c = other.c;
		return *this;
	}
	~MutantStack(){}

	iterator begin(){
		return this->c.begin();
	}
	iterator end(){
		return this->c.end();
	}
private:
};

#endif