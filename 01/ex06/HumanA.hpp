/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:06:09 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 16:36:07 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA {
	public:
		HumanA();
		HumanA(std::string name);
		HumanA(std::string name, Weapon *weapon);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

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
