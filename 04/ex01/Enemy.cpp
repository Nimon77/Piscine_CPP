/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:36:55 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 23:55:44 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type): _HP(hp), _type(type) {}

Enemy::Enemy(Enemy const & copy): _HP(copy._HP), _type(copy._type) {}

Enemy::~Enemy() {}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_HP = rhs._HP;
	this->_type = rhs._type;
	return *this;
}

std::string const & Enemy::getType() const { return _type; }

int	Enemy::getHP() const { return _HP; }

void	Enemy::takeDamage(int amount)
{
	if (_HP <= 0)
		return ;
	_HP -= amount;
}
