/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:46:56 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 11:59:46 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
	public:
		Pony(std::string name);
		~Pony();

		std::string	&getName();
	private:
		std::string	_name;
};

#endif
