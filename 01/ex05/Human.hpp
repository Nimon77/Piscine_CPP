/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:29:42 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 15:49:12 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>

class	Human
{
	public:
		Human();
		~Human();

		Brain const			&getBrain() const;
		std::string const	identify() const;
	private:
		Brain const	_brain;
};

#endif
