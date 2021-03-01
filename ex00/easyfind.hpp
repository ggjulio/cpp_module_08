/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juligonz <juligonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 01:55:24 by juligonz          #+#    #+#             */
/*   Updated: 2021/03/01 09:30:25 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iterator>
#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator easyfind(T & t, int n){
	return std::find(t.begin(), t.end(), n);
}

#endif