/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:12:58 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/16 03:34:06 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main()
{
	std::list<int> test;

	for (int i = 0; i < 10; i++)
		test.push_back(i);

	try
	{
		std::cout << easyfind(test, 3) << std::endl;
		std::cout << easyfind(test, 1) << std::endl;
		std::cout << easyfind(test, 9) << std::endl;
		std::cout << easyfind(test, 12) << std::endl;
	}
	catch(std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
