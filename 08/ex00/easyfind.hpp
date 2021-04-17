/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:59:51 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/16 03:34:45 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <list>
# include <algorithm>

template<typename T>
int		easyfind(T &container, int to_find)
{
	typename T::iterator find =  std::find(container.begin(), container.end(), to_find);

	if (find == container.end())
		throw std::exception();
	return (*find);
}

#endif
