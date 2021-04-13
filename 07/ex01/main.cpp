/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:48:06 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/13 15:14:47 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	print(char &c)
{
	std::cout << c;
}

void	add(char &c)
{
	c++;
}

int main(void)
{
	char test[] = "abcdefghijklmnop";
	::iter(test, strlen(test), print);
	std::cout << std::endl;
	::iter(test, strlen(test), add);
	::iter(test, strlen(test), print);
	return 0;
}
