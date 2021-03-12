/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:03:48 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 02:26:42 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_hp(0),
	_hpMax(0),
	_energy(0),
	_energyMax(0),
	_lvl(0),
	_name("Unknown"),
	_meleeDamage(0),
	_rangedDamage(0),
	_armorReduction(0)
{
	std::cout << ORANGE << "CL4P-TP " << RED << this->_name
		<< RESET << ": Wow!" << std::endl;
	std::srand(std::time(NULL));
}

ClapTrap::ClapTrap(
	unsigned int	hp,
	unsigned int	hpMax,
	unsigned int	energy,
	unsigned int	energyMax,
	unsigned int	lvl,
	std::string		name,
	unsigned int	meleeDamage,
	unsigned int	rangedDamage,
	unsigned int	armorReduction
):
	_hp(hp),
	_hpMax(hpMax),
	_energy(energy),
	_energyMax(energyMax),
	_lvl(lvl),
	_name(name),
	_meleeDamage(meleeDamage),
	_rangedDamage(rangedDamage),
	_armorReduction(armorReduction)
{
	std::cout << ORANGE << "CL4P-TP " << RED << name
		<< RESET << ": I'm alive!" << std::endl;
	std::srand(std::time(NULL));
}

ClapTrap::ClapTrap(ClapTrap const &copy):
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
	std::cout << ORANGE << "CL4P-TP " << RED << this->_name
		<< RESET << " copy: Good!" << std::endl;
	std::srand(std::time(NULL));
}

ClapTrap::~ClapTrap() {
	std::cout << ORANGE << "CL4P-TP " << RED << this->_name
		<< RESET << ": I die !!!!" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
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

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << RED << this->_name << RESET << ": attacks "
		<< RED << target << RESET << " at range, causing " << GREEN
		<< this->_rangedDamage << RESET << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << RED << this->_name << RESET << ": attacks "
		<< RED << target << RESET << " at melee, causing " << GREEN
		<< this->_rangedDamage << RESET << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount <= this->_armorReduction || amount == 0) {
		std::cout << RED << this->_name << RESET
			<< ": I take " << GREEN << "0" << RESET << " HP !! Noob..." << std::endl;
		return;
	}
	if (amount - this->_armorReduction > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount - this->_armorReduction;
	std::cout << RED << this->_name << RESET
		<< ": Take " << GREEN << amount << RESET << " HP with " << GREEN
		<< this->_armorReduction << RESET << " point of armor and is now at "
		<< GREEN << this->_hp << RESET << " HP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (amount + this->_hp > this->_hpMax)
		this->_hp = this->_hpMax;
	else
		this->_hp += amount;
	std::cout << RED << this->_name << RESET
		<< ": Take some rest and get " << GREEN << amount << RESET
		<< " HP is now at " << GREEN << this->_hp << RESET << " HP" << std::endl;
}

void	ClapTrap::setHp(unsigned int value) { this->_hp = value; }
void	ClapTrap::setHpMax(unsigned int value) { this->_hpMax = value; }
void	ClapTrap::setEnergy(unsigned int value) { this->_energy = value; }
void	ClapTrap::setEnergyMax(unsigned int value) { this->_energyMax = value; }
void	ClapTrap::setLvl(unsigned int value) { this->_lvl = value; }
void	ClapTrap::setName(std::string name) { this->_name = name; }
void	ClapTrap::setMeleeDamage(unsigned int value) { this->_meleeDamage = value; }
void	ClapTrap::setRangedDamage(unsigned int value) { this->_rangedDamage = value; }
void	ClapTrap::setArmorReduction(unsigned int value) { this->_armorReduction = value; }

unsigned int	ClapTrap::getHp() const { return this->_hp; }
unsigned int	ClapTrap::getHpMax() const { return this->_hpMax; }
unsigned int	ClapTrap::getEnergy() const { return this->_energy; }
unsigned int	ClapTrap::getLvl() const { return this->_lvl; }
std::string		ClapTrap::getName() const { return this->_name; }
unsigned int	ClapTrap::getMeleeDamage() const { return this->_meleeDamage; }
unsigned int	ClapTrap::getRangedDamage() const { return this->_rangedDamage; }
unsigned int	ClapTrap::getArmorReduction() const { return this->_armorReduction; }
