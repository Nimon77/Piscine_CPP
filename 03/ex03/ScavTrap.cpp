/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:14:26 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 02:30:16 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
	ClapTrap(
		100,
		100,
		50,
		50,
		1,
		"Unknown",
		20,
		15,
		3
	)
{
	std::cout << MAGENTA << "SC4V-TP " << RED << getName() << RESET
		<< ": Systems online. Don't slow me down." << std::endl;
	std::srand(std::time(NULL));
}

ScavTrap::ScavTrap(std::string name):
	ClapTrap(
		100,
		100,
		50,
		50,
		1,
		name,
		20,
		15,
		3
	)
{
	std::cout << MAGENTA << "SC4V-TP " << RED << name << RESET
		<< ": All powered up. Let's dance." << std::endl;
	std::srand(std::time(NULL));
}

ScavTrap::ScavTrap(ScavTrap const &copy):
	ClapTrap(copy)
{
	std::cout << MAGENTA << "SC4V-TP " << RED << getName() << RESET
		<< " copy: Ready to chew ass and spit gum! And I'm all outta ass." << std::endl;
	std::srand(std::time(NULL));
}

ScavTrap::~ScavTrap() {
	std::cout << MAGENTA << "SC4V-TP " << RED << getName() << RESET
		<< ": Goin'...offline!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	std::string attack[5] = {
		"Jump throught the winndow!",
		"Kill your teamate!",
		"Throw a molotov on your car!",
		"Rock-paper-scissors with me, right now!",
		"Put your finger in the socket!"
	};

	if (getEnergy() < 25) {
		std::cout << MAGENTA << "SC4V-TP " << RED << getName() << RESET
			<< ": I'm out of energy right now... (energy: " << GREEN
			<< getEnergy() << RESET << ")" << std::endl;
		return;
	}
	setEnergy(getEnergy() - 25);
	std::cout << MAGENTA << "SC4V-TP " << RED << getName() << RESET
		<< ": challenge " << RED << target << RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << getEnergy() << RESET << ")" << std::endl;
}
