/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:08:16 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/08 18:33:55 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.hpp"

void * serialize(void)
{
	char * result = new char[8 + sizeof(int) + 8];

	srand( (unsigned) time(NULL) * getpid());

	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; i++)
		result[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	*reinterpret_cast<int*>(result + 8) = rand();
	for (int i = 0; i < 8; i++)
		result[8 + sizeof(int) + i] = alphanum[rand() % (sizeof(alphanum) - 1)];

	return(result);
}
