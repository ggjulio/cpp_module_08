/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 01:55:24 by juligonz          #+#    #+#             */
/*   Updated: 2021/02/24 10:32:55 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iterator>
#include <algorithm>
#include <vector>


// template< template< typename T > class Container>
// template< template<typename ... > class Container, typename T>
// template<typename C, typename T = typename C::value::type>
template<typename T>
typename T::iterator easyfind(T t, int n){
	typename T::iterator it = std::find(t.begin(), t.end(), n);
	return it;
	// return std::find(t.begin(), t.end(), n);
	// return std::find(t.begin(), t.end(), n);
	// return t.begin();
}
// typename std::T::iterator& easyfind(T t, int n){
// 	std::find(t.begin(), t.end(), n);
// 	return t.begin();
// }

#endif
