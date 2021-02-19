/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:29:36 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 15:49:19 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() {}

Brain::~Brain() {}

std::string const	Brain::identify() const
{
	std::stringstream ptr;
	ptr << (void *)this;
	return ptr.str();
}
