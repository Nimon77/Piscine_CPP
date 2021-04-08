/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convSca.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:24:22 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/06 18:15:51 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVSCA_HPP
# define CONVSCA_HPP

# include <iostream>
# include <string>
# include <exception>
# include <limits>
# include <cmath>
# include <bitset>

class convSca
{
	public:
		convSca(std::string const &str);
		virtual ~convSca();

		double	toConv(std::string const &str);

		char	toChar(double val);
		char	toChar();

		int		toInt(double val);
		int		toInt();

		float	toFloat(double val);
		float	toFloat();

		double	toDouble(double val);
		double	toDouble();

		bool	isInt(double val);
		bool	isInt();

		operator char() { return toChar(); }
		operator int() { return toInt(); }
		operator float() { return toFloat(); }
		operator double() { return toDouble(); }


	private:
		convSca();
		convSca(convSca const &ref);
		convSca &operator=(convSca const &ref);

		double	_value;

		class	NotConvertible: public std::exception
		{
			virtual const char *what() const throw()
			{
				return "impossible";
			}
		} NotConvertible;

		class	NotDisplayable: public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Non displayable";
			}
		} NotDisplayable;
};

#endif
