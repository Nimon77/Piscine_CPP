/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:10:41 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 23:55:16 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name): _name(name), _AP(40) {}

Character::Character(Character const & copy):
	_name(copy._name),
	_AP(copy._AP),
	_weapon(copy._weapon)
{}

Character::~Character() {}

Character & Character::operator=(Character const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_AP = rhs._AP;
	this->_weapon = rhs._weapon;
	return *this;
}

void	Character::recoverAP()
{
	if (_AP >= 40)
		return ;
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
}

void	Character::equip(AWeapon *weapon) { _weapon = weapon; }

void	Character::attack(Enemy *enemy)
{
	if (_weapon == NULL || _AP < _weapon->getAPCost())
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	_AP -= _weapon->getAPCost();
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const & Character::getName() const { return _name; }

AWeapon const * Character::getWeapon() const { return _weapon; }

int Character::getAP() const { return _AP; }

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon() == NULL)
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
		return o;
	}
	o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a "
		<< rhs.getWeapon()->getName() << std::endl;
	return o;
}
