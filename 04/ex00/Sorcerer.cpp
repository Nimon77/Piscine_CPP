/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:09:56 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/16 18:01:21 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

std::string const	&Sorcerer::getName() const { return _name; }
std::string const	&Sorcerer::getTitle() const { return _title; }

void 	Sorcerer::introduce() const {
	std::cout << "I am " << _name << ", " << _title
		<< ", " << _title << ", and I like ponies!" << std::endl;
}

void	Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &o, const Sorcerer &rhs) {
	return (o << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies!" << std::endl);
}
