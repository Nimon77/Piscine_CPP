/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:35 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 13:22:38 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

int	main()
{
	Zombie	zombie1("Bob1", "Eater");
	ZombieEvent	event;

	event.setZombieType("Runner");
	Zombie	*zombie2 = event.newZombie("Bob2");
	event.setZombieType("Sleeper");
	Zombie	*zombie3 = event.newZombie("Bob3");
	Zombie	*zombie4 = event.randomChump();

	zombie1.advert();
	zombie2->advert();
	delete zombie2;
	zombie3->advert();
	delete zombie3;
	zombie4->advert();
	delete zombie4;
}
