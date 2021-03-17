/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:06:06 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 22:23:21 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & copy);
		~Character();

		Character & operator=(Character const & rhs);

		void	recoverAP();
		void	equip(AWeapon*);
		void	attack(Enemy*);

		std::string const & getName() const;
		int getAP() const;
		AWeapon	const * getWeapon() const;

	private:
		std::string	_name;
		int			_AP;
		AWeapon		*_weapon;
};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif
