/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:16:40 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/02 15:54:37 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed &	operator=(Fixed const &rhs);
	private:
		int					_rawBits;
		int static const	_fBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
