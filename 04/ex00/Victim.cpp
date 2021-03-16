/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:28:23 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/16 17:58:56 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void	Victim::introduce() const {
	std::cout << "I'm " << _name << " and I like otters!" << std::endl;
}

void	Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::string const	Victim::getName() const { return _name; }


std::ostream &operator<<(std::ostream &o, Victim const &rhs) {
	return (o << "I'm " << rhs.getName() << " and I like otters!" << std::endl);
}
