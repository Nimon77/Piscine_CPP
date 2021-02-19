/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:22:23 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 16:36:24 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB() {}
HumanB::HumanB(std::string name): _name(name) {}
HumanB::HumanB(std::string name, Weapon *weapon): _name(name), _weapon(weapon) {}
HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(&weapon) {}

HumanB::~HumanB() {}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setName(std::string name) {
	this->_name = name;
}

void	HumanB::setWeapon(Weapon *weapon) {
	this->_weapon = weapon;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

std::string const&	HumanB::getName() const {
	return this->_name;
}

Weapon const&		HumanB::getWeapon() const {
	return *this->_weapon;
}
