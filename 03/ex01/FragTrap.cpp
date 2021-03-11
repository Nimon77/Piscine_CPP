/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 01:44:49 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/09 04:55:19 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():
	_hp(100),
	_hpMax(100),
	_energy(100),
	_energyMax(100),
	_lvl(1),
	_name("Unknown"),
	_meleeDamage(30),
	_rangedDamage(20),
	_armorReduction(5)
{
	std::cout << "FR4G-TP " << RED << this->_name << RESET
		<< ": Wow, that actually worked?" << std::endl;
	std::srand(std::time(NULL));
}

FragTrap::FragTrap(std::string name):
	_hp(100),
	_hpMax(100),
	_energy(100),
	_energyMax(100),
	_lvl(1),
	_name(name),
	_meleeDamage(30),
	_rangedDamage(20),
	_armorReduction(5)
{
	std::cout << "FR4G-TP " << RED << name << RESET
		<< ": Hahahahaha! I'm alive!" << std::endl;
	std::srand(std::time(NULL));
}

FragTrap::FragTrap(FragTrap const &copy):
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
	std::cout << "FR4G-TP " << RED << this->_name << RESET
		<< " copy: Good, I didn't want any spare parts!" << std::endl;
	std::srand(std::time(NULL));
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << RED << this->_name << RESET
		<< ": I die the way I lived: annoying!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs) {
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

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << RED << this->_name << RESET << ": attacks "
		<< RED << target << RESET << " at range, causing " << GREEN
		<< this->_rangedDamage << RESET << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << RED << this->_name << RESET << ": attacks "
		<< RED << target << RESET << " at melee, causing " << GREEN
		<< this->_rangedDamage << RESET << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount) {
	if (amount <= this->_armorReduction || amount == 0) {
		std::cout << "FR4G-TP " << RED << this->_name << RESET
			<< ": I take " << GREEN << "0" << RESET << " HP !! Noob..." << std::endl;
		return;
	}
	if (amount - this->_armorReduction > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount - this->_armorReduction;
	std::cout << "FR4G-TP " << RED << this->_name << RESET
		<< ": Take " << GREEN << amount << RESET << " HP with " << GREEN
		<< this->_armorReduction << RESET << " point of armor and is now at "
		<< GREEN << this->_hp << RESET << " HP" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (amount + this->_hp > this->_hpMax)
		this->_hp = this->_hpMax;
	else
		this->_hp += amount;
	std::cout << "FR4G-TP " << RED << this->_name << RESET
		<< ": Take some rest and get " << GREEN << amount << RESET
		<< " HP is now at " << GREEN << this->_hp << RESET << " HP" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string attack[5] = {
		"I am a tornado of death and bullets!",
		"Unts unts unts unts!",
		"There is no way this ends badly!",
		"Grenaaaade!",
		"This time it'll be awesome, I promise!"
	};

	if (this->_energy < 25) {
		std::cout << "FR4G-TP " << RED << this->_name << RESET
			<< ": I'm too lazy right now... (energy: " << GREEN
			<< this->_energy << RESET << ")" << std::endl;
		return;
	}
	this->_energy -= 25;
	std::cout << "FR4G-TP " << RED << this->_name << RESET
		<< ": attack " << RED << target << RESET << ": " << attack[std::rand() % 5]
		<< " (energy: " << GREEN << this->_energy << RESET << ")" << std::endl;
}
