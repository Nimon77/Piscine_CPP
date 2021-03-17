/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:57:09 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 12:23:09 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP

# define AWEAPON_HPP

# include <string>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & copy);
		virtual ~AWeapon();

		AWeapon &operator=(AWeapon const & rhs);

		std::string const &	getName() const;
		int	getAPCost() const;
		int	getDamage() const;
		virtual void attack() const = 0;

	private:
		std::string	_name;
		int			_damage;
		int			_APCost;

};

#endif
