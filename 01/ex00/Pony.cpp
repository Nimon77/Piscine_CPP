/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:41:13 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 12:10:29 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name): _name(name)
{
	std::cout << "Pony " << this->_name << " is born !" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony " << this->_name << " is dead..." << std::endl;
}

std::string &Pony::getName()
{
	return this->_name;
}
