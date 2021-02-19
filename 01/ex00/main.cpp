/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:51:39 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 12:13:19 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheStack()
{
	std::cout << "-- STACK --" << std::endl;
	Pony heap = Pony("Fred");
	std::cout << heap.getName() << " is happy on the stack" << std::endl;
}

void	ponyOnTheHeap()
{
	std::cout << "-- HEAP --" << std::endl;
	Pony *stack = new Pony("Bob");
	std::cout << stack->getName() << " is happy on the heap" << std::endl;
	delete stack;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();

	return 0;
}
