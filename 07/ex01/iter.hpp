/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:48:04 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/13 15:13:51 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>

template<typename T>
void	iter(T *array, size_t size, void (*f)(T &))
{
	for(size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif
