/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:29:43 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 18:14:22 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _size(0), _list(NULL) {}

Squad::Squad(Squad const & copy): _size(copy._size)
{
	const t_list *tmpCopy;
	t_list *tmp;

	if (copy._size == 0)
		return;
	this->_list->unit = copy._list->unit;
	this->_size++;
	tmpCopy = copy._list->next;
	tmp = this->_list;
	while (tmpCopy != NULL)
	{
		tmp->next = new s_list;
		tmp->unit = tmpCopy->unit;
		tmpCopy = tmpCopy->next;
		this->_size++;
	}
}

Squad::~Squad()
{
	t_list *tmp;

	while (this->_list)
	{
		if (this->_list->unit)
			delete this->_list->unit;
		tmp = this->_list->next;
		delete this->_list;
		this->_list = tmp;
	}
}

int Squad::getCount() const { return _size; }

Squad & Squad::operator=(Squad const & rhs)
{
	t_list	*tmp;

	if (this == &rhs)
		return *this;
	while (this->_list)
	{
		if (this->_list->unit)
			delete this->_list->unit;
		tmp = this->_list->next;
		delete this->_list;
		this->_list = tmp;
	}
	this->_list = rhs._list;
	this->_size = rhs._size;
	return *this;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	const t_list *tmp = this->_list;

	if (n > _size)
		return NULL;
	for (int i = 0; tmp != NULL && i < n; i++)
		tmp = tmp->next;
	return tmp->unit;
}

int Squad::push(ISpaceMarine *to_add)
{
	t_list *tmp = this->_list;

	if (to_add == NULL)
		return this->_size;
	if (this->_list == NULL)
	{
		this->_list = new t_list;
		this->_list->unit = to_add;
		this->_list->next = NULL;
		return ++this->_size;
	}
	while (tmp && tmp->next)
	{
		if (tmp->unit == to_add)
			return this->_size;
		tmp = tmp->next;
	}
	tmp->next = new t_list;
	tmp->next->unit = to_add;
	tmp->next->next = NULL;
	return ++this->_size;
}
