/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:29 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 13:20:53 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{}

Zombie::~Zombie() {}

void	Zombie::advert()
{
	std::cout << "<" << this->_name
		<< " (" << this->_type << ")> "
		<< "Braiiiiiiinnnssss ..." << std::endl;
}
