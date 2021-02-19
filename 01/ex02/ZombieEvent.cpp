/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:31 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 13:59:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

std::string	ZombieEvent::_randomName[10] = {
			"Hoggie",
			"Reekie",
			"Piggie",
			"Deco",
			"Stench",
			"Toothie",
			"Bloatie",
			"Guzzlie",
			"Gum",
			"Munchie"
};

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->_type);
	return (zombie);
}

Zombie	*ZombieEvent::randomChump()
{
	std::srand(std::time(nullptr));
	std::string &name = this->_randomName[std::rand() % 10];
	Zombie *zombie = this->newZombie(name);
	zombie->advert();
	return (zombie);
}
