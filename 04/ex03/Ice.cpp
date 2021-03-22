/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:46:34 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 18:55:29 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const & copy): AMateria(copy) {}

Ice::~Ice() {}

Ice & Ice::operator=(Ice const & rhs)
{
	if (this == &rhs)
		return *this;
	AMateria::operator=(rhs);
	return *this;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
