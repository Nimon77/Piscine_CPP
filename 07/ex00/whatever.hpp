/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:39:13 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/10 16:52:20 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	T	c = a;
	a = b;
	b = c;
}

template <typename T>
T const &	min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
T const &	max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

#endif
