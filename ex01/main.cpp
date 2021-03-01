/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 02:06:45 by juligonz          #+#    #+#             */
/*   Updated: 2021/03/01 13:37:22 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <ctime>
#include "Span.hpp"

int randomNumber () { return (std::rand()%15000); }

int main(){
	std::srand(std::time(0));
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
	std::cout << "################### Test two elem... #############" << std::endl;
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		sp.addNumber(5);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "################### Test Too many elem... #############" << std::endl;
	{
		Span sp = Span(3);

		try{
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			sp.addNumber(5);
			std::cout << "Failed !! :-("	<< std::endl;
		} 
		catch (std::out_of_range &e){
			std::cout << "Too many elements ! only 3 pls :"	<< std::endl
				<< "\t" << e.what() << std::endl;
		}
		
	}
	std::cout << "################### Test Negative elems... #############" << std::endl;
	{
		Span sp = Span(10);
		const int arr[] = {-5, 17, -6, 0, 0, 0, 11};
		std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(*arr));

		sp.addRange(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "################### Test 10000... #############" << std::endl;
	{
		Span sp = Span(10000);
		std::vector<int> vec(10000);

		std::generate(vec.begin(), vec.end(), randomNumber);
		sp.addRange(vec.begin(), vec.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	return 0;
}