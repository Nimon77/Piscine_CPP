/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:35:44 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/17 15:33:03 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"
# include <iostream>
# include <unistd.h>
# include <ctime>
# include <cstdlib>

int main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	try {
		Span sp2 = Span(1);
		sp2.addNumber(12);
		sp2.addNumber(1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Span sp3 = Span(1);
		sp3.addNumber(12);
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Span sp4 = Span(10000);
		for (int i = 0; i < 10000; i++)
			sp4.addNumber(i);
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::srand(std::time(NULL) * getpid());
	try {
		Span sp5 = Span(10000000);
		for (int i = 0; i < 10000000; i++)
		{
			sp5.addNumber(std::rand());
		}
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Span sp6 = Span(15);
		std::vector<int> range(15, 42);
		range[10] = 12;
		sp6.addNumber(range.begin(), range.end());
		std::cout << sp6.shortestSpan() << std::endl;
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
