/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:29:47 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 20:13:53 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	for (int i = 0; i < 4; i++)
		_list[i] = copy._list[i];
}

MateriaSource::~MateriaSource() {}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this == &rhs)
		return *this;
	for (int i = 0; i < 4; i++)
		_list[i] = rhs._list[i];
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (_list[i] && i < 4)
		i++;
	if (i == 4)
		return ;
	_list[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_list[i] && _list[i]->getType() == type)
			return _list[i]->clone();
	return NULL;
}
