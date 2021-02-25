/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:57:35 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/20 18:24:44 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

class MutantStack
{
private:
	
public:
	
	MutantStack();
	MutantStack(const MutantStack &);
	MutantStack & operator=(const MutantStack &);
	virtual ~MutantStack();

	
};

#endif

// #######################################################

#include "MutantStack.hpp"

MutantStack::MutantStack(){}
MutantStack::MutantStack(const MutantStack &other){
	*this = other;
}
MutantStack & MutantStack::operator=(const MutantStack &){
	
}

MutantStack::~MutantStack(){}