/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:11:30 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/10 17:14:13 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define SURGREEN "\033[42m"
# define SURCYAN "\033[46m"
# define SURRED "\033[101m"
# define RESET "\033[0m"

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ScavTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		ScavTrap & operator=(ScavTrap const &rhs);

		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer(std::string const & target);

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
