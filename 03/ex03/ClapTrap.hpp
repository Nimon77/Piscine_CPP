/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:57:58 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 22:28:44 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# define RED "\033[0m\033[1;31m"
# define GREEN "\033[0m\033[1;32m"
# define ORANGE "\033[0m\033[1;38;5;208m"
# define MAGENTA "\033[0m\033[1;35m"
# define LBLUE "\033[0m\033[1;96m"
# define YELLOW "\033[0m\033[1;33m"
# define SURGREEN "\033[42m"
# define SURCYAN "\033[46m"
# define SURRED "\033[101m"
# define RESET "\033[0m"

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(
			unsigned int	_hp,
			unsigned int	_hpMax,
			unsigned int	_energy,
			unsigned int	_energyMax,
			unsigned int	_lvl,
			std::string		_name,
			unsigned int	_meleeDamage,
			unsigned int	_rangedDamage,
			unsigned int	_armorReduction
		);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const &rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		unsigned int	getHp() const;
		unsigned int	getHpMax() const;
		unsigned int	getEnergy() const;
		unsigned int	getEnergyMax() const;
		unsigned int	getLvl() const;
		std::string		getName() const;
		unsigned int	getMeleeDamage() const;
		unsigned int	getRangedDamage() const;
		unsigned int	getArmorReduction() const;
	
	protected:
		void	setHp(unsigned int value);
		void	setHpMax(unsigned int value);
		void	setEnergy(unsigned int value);
		void	setEnergyMax(unsigned int value);
		void	setLvl(unsigned int value);
		void	setName(std::string name);
		void	setMeleeDamage(unsigned int value);
		void	setRangedDamage(unsigned int value);
		void	setArmorReduction(unsigned int value);

	private:
		unsigned int	_hp;
		unsigned int	_hpMax;
		unsigned int	_energy;
		unsigned int	_energyMax;
		unsigned int	_lvl;
		std::string		_name;
		unsigned int	_meleeDamage;
		unsigned int	_rangedDamage;
		unsigned int	_armorReduction;
};

#endif
