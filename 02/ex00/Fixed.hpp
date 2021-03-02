/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:16:40 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/25 07:58:08 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed &	operator=(Fixed const &rhs);
	private:
		int					_rawBits;
		int static const	_nbrBits = 8;
};

#endif
