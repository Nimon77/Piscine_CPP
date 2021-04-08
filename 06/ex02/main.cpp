/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:47:16 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/08 20:06:06 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.hpp"

Base::~Base() {}

Base * generate(void)
{
	switch(std::rand() % 3)
	{
		case 0: return (new A());
		case 1: return (new B());
		case 2: return (new C());
	}
	return (NULL);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p)) {
		std::cout << "A";
	}
	else if (dynamic_cast<B *>(p)) {
		std::cout << "B";
	}
	else if (dynamic_cast<C *>(p)) {
		std::cout << "C";
	}
}

void identify_from_reference(Base & p)
{
	Base tmp;

	try {
		tmp = dynamic_cast<A &>(p);
		std::cout << "A";
		return ;
	} catch (...) {}

	try {
		tmp = dynamic_cast<B &>(p);
		std::cout << "B";
		return ;
	} catch (...) {}

	try {
		tmp = dynamic_cast<C &>(p);
		std::cout << "C";
		return ;
	} catch (...) {}
}

int main()
{
	std::srand((unsigned)time(NULL) * getpid());

	Base * rand = generate();
	identify_from_pointer(rand);
	identify_from_reference(*rand);
	std::cout << std::endl;
	delete rand;

	rand = generate();
	identify_from_pointer(rand);
	identify_from_reference(*rand);
	std::cout << std::endl;
	delete rand;

	rand = generate();
	identify_from_pointer(rand);
	identify_from_reference(*rand);
	std::cout << std::endl;
	delete rand;

	rand = generate();
	identify_from_pointer(rand);
	identify_from_reference(*rand);
	std::cout << std::endl;
	delete rand;

	rand = generate();
	identify_from_pointer(rand);
	identify_from_reference(*rand);
	std::cout << std::endl;
	delete rand;
}
