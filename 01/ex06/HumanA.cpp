/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:11:16 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 16:35:59 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() {}
HumanA::HumanA(std::string name): _name(name) {}
HumanA::HumanA(std::string name, Weapon *weapon): _name(name), _weapon(weapon) {}
HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(&weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanA::setName(std::string name) {
	this->_name = name;
}

void	HumanA::setWeapon(Weapon *weapon) {
	this->_weapon = weapon;
}

void	HumanA::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

std::string const&	HumanA::getName() const {
	return this->_name;
}

Weapon const&		HumanA::getWeapon() const {
	return *this->_weapon;
}
