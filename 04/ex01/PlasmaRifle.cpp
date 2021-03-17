/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:26:01 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 23:52:19 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
	AWeapon(
		"Plasma Rifle",
		5,
		21
	)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle & copy):
	AWeapon(copy)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this == &rhs)
		return *this;
	AWeapon::operator=(rhs);
	return *this;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
