/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:57:12 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 16:06:56 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const&	getType() const;
		
		void	setType(std::string type);
	private:
		std::string	_type;
};

#endif
