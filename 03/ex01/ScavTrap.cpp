/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:14:26 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/11 03:00:24 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():
	_hp(100),
	_hpMax(100),
	_energy(50),
	_energyMax(50),
	_lvl(1),
	_name("Unknown"),
	_meleeDamage(20),
	_rangedDamage(15),
	_armorReduction(3)
{
	std::cout << "SC4V-TP " << RED << this->_name << RESET
		<< ": Systems online. Don't slow me down." << std::endl;
	std::srand(std::time(NULL));
}

ScavTrap::ScavTrap(std::string name):
	_hp(100),
	_hpMax(100),
	_energy(50),
	_energyMax(50),
	_lvl(1),
	_name(name),
	_meleeDamage(20),
	_rangedDamage(15),
	_armorReduction(3)
{
	std::cout << "SC4V-TP " << RED << name << RESET
		<< ": All powered up. Let's dance." << std::endl;
	std::srand(std::time(NULL));
}

ScavTrap::ScavTrap(ScavTrap const &copy):
	_hp(copy._hp),
	_hpMax(copy._hpMax),
	_energy(copy._energy),
	_energyMax(copy._energyMax),
	_lvl(copy._lvl),
	_name(copy._name),
	_meleeDamage(copy._meleeDamage),
	_rangedDamage(copy._rangedDamage),
	_armorReduction(copy._armorReduction)
{
	std::cout << "SC4V-TP " << RED << this->_name << RESET
		<< " copy: Ready to chew ass and spit gum! And I'm all outta ass." << std::endl;
	std::srand(std::time(NULL));
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP " << RED << this->_name << RESET
		<< ": Goin'...offline!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	if (this == &rhs)
		return (*this);
	this->_hp = rhs._hp;
	this->_hpMax = rhs._hpMax;
	this->_energy = rhs._energy;
	this->_energyMax = rhs._energyMax;
	this->_lvl = rhs._lvl;
	this->_name = rhs._name;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangedDamage = rhs._rangedDamage;
	this->_armorReduction = rhs._armorReduction;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << RED << this->_name << RESET << ": attacks "
		<< RED << target << RESET << " at range, causing " << GREEN
		<< this->_rangedDamage << RESET << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP " << RED << this->_name << RESET << ": attacks "
		<< RED << target << RESET << " at melee, causing " << GREEN
		<< this->_rangedDamage << RESET << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (amount <= this->_armorReduction || amount == 0) {
		std::cout << "SC4V-TP " << RED << this->_name << RESET
			<< ": I take " << GREEN << "0" << RESET << " HP !! Noob..." << std::endl;
		return;
	}
	if (amount - this->_armorReduction > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount - this->_armorReduction;
	std::cout << "SC4V-TP " << RED << this->_name << RESET
		<< ": Take " << GREEN << amount << RESET << " HP with " << GREEN
		<< this->_armorReduction << RESET << " point of armor and is now at "
		<< GREEN << this->_hp << RESET << " HP" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (amount + this->_hp > this->_hpMax)
		this->_hp = this->_hpMax;
	else
		this->_hp += amount;
	std::cout << "SC4V-TP " << RED << this->_name << RESET
		<< ": Health! Get " << GREEN << amount << RESET
		<< " HP is now at " << GREEN << this->_hp << RESET << " HP" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	std::string attack[5] = {
		"Jump throught the winndow!",
		"Kill your teamate!",
		"Throw a molotov on your car!",
		"Rock-paper-scissors with me, right now!",
		"Put your finger in the socket!"
	};

	if (this->_energy < 25) {
		std::cout << "SC4V-TP " << RED << this->_name << RESET
			<< ": I'm out of energy right now... (energy: " << GREEN
			<< this->_energy << RESET << ")" << std::endl;
		return;
	}
	this->_energy -= 25;
	std::cout << "SC4V-TP " << RED << this->_name << RESET
		<< ": challenge " << RED << target << RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << this->_energy << RESET << ")" << std::endl;
}
