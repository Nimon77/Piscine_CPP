/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:23:31 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 22:44:53 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist():
	AWeapon(
		"Power Fist",
		8,
		50
	)
{}

PowerFist::PowerFist(PowerFist & copy):
	AWeapon(copy)
{}

PowerFist::~PowerFist()
{}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	if (this == &rhs)
		return *this;
	AWeapon::operator=(rhs);
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
