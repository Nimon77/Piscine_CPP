/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:00:32 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 16:04:47 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon() {}

std::string const&	Weapon::getType() const {
	return this->_type;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
}
