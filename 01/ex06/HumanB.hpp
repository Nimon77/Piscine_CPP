/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:21:46 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 16:36:30 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB {
	public:
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon *weapon);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();

		void	attack() const;

		void	setName(std::string name);
		void	setWeapon(Weapon *weapon);
		void	setWeapon(Weapon &weapon);

		std::string const&	getName() const;
		Weapon const&		getWeapon() const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
