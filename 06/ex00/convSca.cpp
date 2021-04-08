/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convSca.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:33:59 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/06 18:07:01 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convSca.hpp"

convSca::convSca(std::string const &str): _value(std::strtod(str.c_str(), NULL))
{
	if ((str.length() == 3 && str[0] == '\'' && str[2] == '\''))
		_value = static_cast<double>(str[1]);
	else if (str.length() == 1 && isprint(str[0]) && !isnumber(str[0]))
		_value = static_cast<double>(str[0]);
	else
		_value = std::strtod(str.c_str(), NULL);
}

convSca::~convSca() {}

double	convSca::toConv(std::string const &str)
{
	if ((str.length() == 3 && str[0] == '\'' && str[2] == '\''))
		_value = static_cast<double>(str[1]);
	else if (str.length() == 1 && isprint(str[0]) && !isnumber(str[0]))
		_value = static_cast<double>(str[0]);
	else
		_value = std::strtod(str.c_str(), NULL);
	return _value;
}

char	convSca::toChar(double val)
{
	if (isnan(val) || isinf(val))
		throw NotConvertible;
	if (val < 33.0 || val > 126.0)
		throw NotDisplayable;
	return static_cast<char>(val);
}
char	convSca::toChar() { return convSca::toChar(_value); }

int		convSca::toInt(double val)
{
	if (val < INT_MIN || val > INT_MAX || isnan(val) || isinf(val))
		throw NotConvertible;
	return static_cast<int>(val);
}
int		convSca::toInt() { return convSca::toInt(_value); }

float	convSca::toFloat(double val)
{
	return static_cast<float>(val);
}
float	convSca::toFloat() { return convSca::toFloat(_value); }

double	convSca::toDouble(double val)
{
	return static_cast<double>(val);
}
double	convSca::toDouble() { return convSca::toDouble(_value); }

bool	convSca::isInt(double val)
{
	return !(val - static_cast<int>(val) != 0); 
}
bool	convSca::isInt() { return convSca::isInt(_value); }
