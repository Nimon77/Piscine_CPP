/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:08:47 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 20:12:20 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name) {}

Character::Character(Character const & copy): _name(copy._name)
{
	for (int i = 0; i < 4; i++)
		_inv[i] = copy._inv[i];
}

Character::~Character() {}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
		return *this;
		_name = rhs._name;
	for (int i = 0; i < 4; i++)
		_inv[i] = rhs._inv[i];
	return *this;
}

std::string const &	Character::getName() const { return _name; }

void				Character::equip(AMateria* m)
{
	int i = 0;
	while (_inv[i] && i < 4)
		i++;
	if (i == 4)
		return ;
	_inv[i] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	_inv[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !_inv[idx])
		return ;
	_inv[idx]->use(target);
}
