/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:15:13 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/17 15:30:30 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n): _max(n) {}

Span::Span(Span const &ref): _max(ref._max)
{
	_values = std::vector<int>(ref._values);
}

Span::~Span() {}

Span	&Span::operator=(Span const &ref)
{
	if (this == &ref)
		return *this;
	return *this;
}

void	Span::addNumber(int number)
{
	if (_values.size() >= _max)
		throw std::out_of_range("Out of range");
	_values.push_back(number);
}

int		Span::shortestSpan()
{
	if (_values.size() <= 1)
		throw exceptSpan;

	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = _values.end();
	int first, second;

	first = second = INT_MAX;
	for (it = _values.begin(); it != ite; ++it)
	{
		if (*it - first == 0)
			return (0);
		if (*it < first)
		{
			second = first;
			first = *it;
		}
		else if (*it < second && *it != first)
			second = *it;
	}
	int result = first == second ? 0 : first - second;
	return (result < 0 ? result * -1 : result);
}

int		Span::longestSpan()
{
	if (_values.size() <= 1)
		throw exceptSpan;

	int size = 0;
	std::vector<int>::const_iterator min = std::min_element(_values.begin(), _values.end());
	std::vector<int>::const_iterator max = std::max_element(_values.begin(), _values.end());
	
	size = *min - *max;
	return (size < 0 ? size * -1 : size);
}
