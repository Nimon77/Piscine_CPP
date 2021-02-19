/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:29:40 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 15:48:40 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

Brain const	&Human::getBrain() const
{
	return this->_brain;
}

std::string const	Human::identify() const
{
	return this->_brain.identify();
}
