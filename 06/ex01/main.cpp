/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:17:11 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/08 18:36:38 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.hpp"

int main(void)
{
	void * data = serialize();;

	Data * value = deserialize(data);

	std::cout << value->s1 << " " << value->n << " " << value->s2 << std::endl;

	delete reinterpret_cast<char*>(data);
	delete value;
}
