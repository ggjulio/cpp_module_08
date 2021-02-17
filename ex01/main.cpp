/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 02:06:45 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/17 14:28:25 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Span.hpp"

int main(){
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "################### Test Only One elem... #############" << std::endl;
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		try{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} 
		catch (std::out_of_range &e){
			std::cout << "Mhhh... We need at least 2 elements... :" << std::endl
				<< "\t" << e.what() << std::endl;
		}
	}
	std::cout << "################### Test Too many elem... #############" << std::endl;
	{
		Span sp = Span(3);

		try{
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
		} 
		catch (std::out_of_range &e){
			std::cout << "Too many elements ! only 5 pls :"	<< std::endl
				<< "\t" << e.what() << std::endl;
		}
	}
	std::cout << "################### Test Negative elems... #############" << std::endl;
	{
		Span sp = Span(10);
		
		sp.addNumber(-5);
		sp.addNumber(17);
		sp.addNumber(-6);
		sp.addNumber(0);
		sp.addNumber(0);
		sp.addNumber(0);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	return 0;
}