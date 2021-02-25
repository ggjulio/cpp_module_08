/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 01:55:22 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/24 10:32:26 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vector;

	vector.push_back(0);
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);

	std::vector<int>::iterator it = easyfind(vector, 2);
	// std::vector<int>::iterator it = easyfind(vector, 2);

	if (it != vector.end())
		std::cout << *it ;
	else
		std::cout << "end" <<std::endl;
	
	// std::cout << easyfind(vector, 2) ;
	// easyfind() ;
	// std::cout << easyfind ;
}
