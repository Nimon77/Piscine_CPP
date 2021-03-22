/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:25:50 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 18:36:58 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type), _xp(0) {}

AMateria::AMateria(AMateria const & copy): _type(copy._type), _xp(copy._xp) {}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	if (this == &rhs)
		return *this;
	_type = rhs._type;
	_xp = rhs._xp;
	return *this;
}

std::string const &	AMateria::getType() const { return _type; }
unsigned int		AMateria::getXP() const { return _xp; }

void	AMateria::use(ICharacter & target)
{
	std::cout << "* use " << _type << " on " << target.getName() << " *" << std::endl;
}
