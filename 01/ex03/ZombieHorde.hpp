/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 13:28:07 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 14:18:08 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde();

		void	announce();
	
	private:
		int					_count;
		Zombie				*listZombie;
		std::string	static	_names[10];
		std::string static	_types[10];
};

#endif
