/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:57:19 by juligonz          #+#    #+#             */
/*   Updated: 2021/03/01 09:10:48 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include <iterator>
#include <string>
#include <vector>


int main(){
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
//#############################################################33
	std::cout << "##################" << std::endl;
	while (!s.empty()){
		std::cout << s.top() << std::endl;
		s.pop();
	}
	MutantStack<int> s2(mstack);
	std::cout << "#####----------####" << std::endl;
	while (!s2.empty()){
		std::cout << s2.top() << std::endl;
		s2.pop();
	}
	return 0;
}
