/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:22:19 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/08 18:35:01 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.hpp"

Data * deserialize(void * raw)
{
	Data * value = new Data;
	char * data = static_cast<char*>(raw);

	value->s1 = std::string(data, 8);
	value->n = *reinterpret_cast<int*>(data + 8);
	value->s2 = std::string(data + 8 + sizeof(int), 8);

	return(value);
}
