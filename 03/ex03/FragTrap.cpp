/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 01:44:49 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 02:32:05 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():
	ClapTrap(
		100,
		100,
		100,
		100,
		1,
		"Unknown",
		30,
		20,
		5
	)
{
	std::cout << LBLUE << "FR4G-TP " << RED << getName() << RESET
		<< ": Wow, that actually worked?" << std::endl;
	std::srand(std::time(NULL));
}

FragTrap::FragTrap(std::string name):
	ClapTrap(
		100,
		100,
		100,
		100,
		1,
		name,
		30,
		20,
		5
	)
{
	std::cout << LBLUE << "FR4G-TP " << RED << name << RESET
		<< ": Hahahahaha! I'm alive!" << std::endl;
	std::srand(std::time(NULL));
}

FragTrap::FragTrap(FragTrap const &copy):
	ClapTrap(copy)
{
	std::cout << LBLUE << "FR4G-TP " << RED << getName() << RESET
		<< " copy: Good, I didn't want any spare parts!" << std::endl;
	std::srand(std::time(NULL));
}

FragTrap::~FragTrap() {
	std::cout << LBLUE << "FR4G-TP " << RED << getName() << RESET
		<< ": I die the way I lived: annoying!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attack[5] = {
		"I am a tornado of death and bullets!",
		"Unts unts unts unts!",
		"There is no way this ends badly!",
		"Grenaaaade!",
		"This time it'll be awesome, I promise!"
	};

	if (getEnergy() < 25) {
		std::cout << LBLUE << "FR4G-TP " << RED << getName() << RESET
			<< ": I'm too lazy right now... (energy: " << GREEN
			<< getEnergy() << RESET << ")" << std::endl;
		return;
	}
	setEnergy(getEnergy() - 25);
	std::cout << LBLUE << "FR4G-TP " << RED << getName() << RESET
		<< ": attack " << RED << target << RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << getEnergy() << RESET << ")" << std::endl;
}
