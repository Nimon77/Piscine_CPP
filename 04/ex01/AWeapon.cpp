/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:05:20 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 23:54:55 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	_name(name),
	_damage(damage),
	_APCost(apcost)
{}

AWeapon::AWeapon(AWeapon const & copy):
	_name(copy._name),
	_damage(copy._damage),
	_APCost(copy._APCost)
{}

AWeapon::~AWeapon() {}

AWeapon & AWeapon::operator=(AWeapon const &rhs)
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_APCost = rhs._APCost;
	return *this;
}

std::string const &	AWeapon::getName() const { return _name; }
int	AWeapon::getAPCost() const { return _APCost; }
int	AWeapon::getDamage() const { return _damage; }
