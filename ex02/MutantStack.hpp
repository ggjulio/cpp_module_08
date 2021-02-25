/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:57:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/25 15:04:30 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

template<typename T, typename Container=std::deque<T>>
class MutantStack
{
private:
	std::stack<T> _stack;
public:
	std::stack<T> iterator;
	
	MutantStack();
	MutantStack(const MutantStack<T> &);
	MutantStack<T> & operator=(const MutantStack<T> &);
	virtual ~MutantStack();

	void push(T);
	void pop();

	Container
	std::stack<T>::iterator begin();
	std::stack<T>::iterator end();
};

#endif

// #######################################################

// #include "MutantStack.hpp"
template<typename T>
MutantStack<T>::MutantStack(){

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other){
	*this = other;
}
template<typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &){

}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
void MutantStack<T>::push(T t){
	_stack.push(t);
}
template<typename T>
void MutantStack<T>::pop(){
	_stack.pop();
}