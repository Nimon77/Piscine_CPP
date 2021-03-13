/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 01:53:01 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/13 02:17:38 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap():
	ClapTrap(
		100,
		100,
		120,120,
		1,
		"Unknown",
		60,
		20,
		5
	),
	FragTrap(),
	NinjaTrap()
{
	std::cout << PURPLE <<"SUPER-TP " << RED << getName() << RESET
		<< ": Created" << std::endl;
}

SuperTrap::SuperTrap(std::string name):
	ClapTrap(
		100,
		100,
		120,120,
		1,
		name,
		60,
		20,
		5
	),
	FragTrap(),
	NinjaTrap()
{
	std::cout << PURPLE << "SUPER-TP " << RED << getName() << RESET
		<< ": Created" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & copy):
	ClapTrap(copy),
	FragTrap(),
	NinjaTrap()
{
	std::cout << PURPLE << "SUPER-TP " << RED << getName() << " copy"
		<< RESET << ": Copied" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << PURPLE << "SUPER-TP " << RED << getName() << RESET
		<< ": Destroyed" << std::endl;
}
