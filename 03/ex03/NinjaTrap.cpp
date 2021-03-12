/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:14:04 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 22:37:25 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap():
	ClapTrap(
		60,
		60,
		120,
		120,
		1,
		"Unknown",
		60,
		5,
		0
	)
{
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": How are you ?" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name):
	ClapTrap(
		60,
		60,
		120,
		120,
		1,
		name,
		60,
		5,
		0
	)
{
	std::cout << YELLOW << "NINJ4-TP " << RED << name << RESET
		<< ": Hello MATE!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy):
	ClapTrap(copy)
{
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": Duplication!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": *disappeared*" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return *this;
}

void	NinjaTrap::ninjaShoebox(ClapTrap & target) {
	std::string attack[5] = {
		"Dead before he even knew",
		"Striking from nowhere",
		"Too bad you're dead now",
		"A spectacle of violence",
		"A deadly shot from nowhere"
	};

	if (getEnergy() < 25) {
		std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
			<< ": I'm out of energy right now... (energy: " << GREEN
			<< getEnergy() << RESET << ")" << std::endl;
		return;
	}
	setEnergy(getEnergy() - 25);
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": challenge " << ORANGE << "CL4P-TP " << RED << target.getName()
		<< RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << getEnergy() << RESET << ")" << std::endl;
	target.takeDamage(getMeleeDamage());
}

void	NinjaTrap::ninjaShoebox(FragTrap & target) {
	std::string attack[5] = {
		"Dead before he even knew",
		"Striking from nowhere",
		"Too bad you're dead now",
		"A spectacle of violence",
		"A deadly shot from nowhere"
	};

	if (getEnergy() < 25) {
		std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
			<< ": I'm out of energy right now... (energy: " << GREEN
			<< getEnergy() << RESET << ")" << std::endl;
		return;
	}
	setEnergy(getEnergy() - 25);
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": challenge " << LBLUE << "FR4G-TP " << RED << target.getName()
		<< RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << getEnergy() << RESET << ")" << std::endl;
	target.takeDamage(getMeleeDamage());
}

void	NinjaTrap::ninjaShoebox(ScavTrap & target) {
	std::string attack[5] = {
		"Dead before he even knew",
		"Striking from nowhere",
		"Too bad you're dead now",
		"A spectacle of violence",
		"A deadly shot from nowhere"
	};

	if (getEnergy() < 25) {
		std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
			<< ": I'm out of energy right now... (energy: " << GREEN
			<< getEnergy() << RESET << ")" << std::endl;
		return;
	}
	setEnergy(getEnergy() - 25);
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": challenge " << MAGENTA << "SC4V-TP " << RED << target.getName()
		<< RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << getEnergy() << RESET << ")" << std::endl;
	target.takeDamage(getMeleeDamage());
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & target) {
	std::string attack[5] = {
		"Dead before he even knew",
		"Striking from nowhere",
		"Too bad you're dead now",
		"A spectacle of violence",
		"A deadly shot from nowhere"
	};

	if (getEnergy() < 25) {
		std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
			<< ": I'm out of energy right now... (energy: " << GREEN
			<< getEnergy() << RESET << ")" << std::endl;
		return;
	}
	setEnergy(getEnergy() - 25);
	std::cout << YELLOW << "NINJ4-TP " << RED << getName() << RESET
		<< ": challenge " << YELLOW << "NINJ4-TP " << RED << target.getName()
		<< RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << getEnergy() << RESET << ")" << std::endl;
	target.takeDamage(getMeleeDamage());
}
