/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:32 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 13:15:44 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieEvent
{
	public:
		ZombieEvent();
		~ZombieEvent();

		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);

		Zombie	*randomChump();

	private:
		std::string	_type;
		std::string	static _randomName[10];
};

#endif
