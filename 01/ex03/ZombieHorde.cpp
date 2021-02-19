/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:27:37 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 14:19:39 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n)
{
	std::srand(std::time(nullptr));

	this->_count = n;
	this->listZombie = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		this->listZombie[i].setName(this->_names[std::rand() % 10]);
		this->listZombie[i].setType(this->_types[std::rand() % 10]);
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->listZombie;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->_count; i++)
		this->listZombie[i].advert();
}

std::string	ZombieHorde::_names[10] = {
	"Gorge",
	"Hogwash",
	"Muncher",
	"Hoggie",
	"Floatie",
	"Gorgie",
	"Chewchew",
	"Chompie",
	"Blister",
	"Reek"
};

std::string	ZombieHorde::_types[10] = {
	"Chewer",
	"Spitter",
	"Gnawer",
	"Pin Cushion",
	"Walker",
	"Taster",
	"Withering Zombie",
	"Mindless Zombie",
	"Icicle Zombie",
	"Hunter"
};
