/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:29 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 14:04:49 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(): _name(""), _type("")
{}

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	Zombie::advert()
{
	std::cout << "<" << this->_name
		<< " (" << this->_type << ")> "
		<< "Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

std::string	&Zombie::getName()
{
	return this->_name;
}

std::string	&Zombie::getType()
{
	return this->_type;
}
