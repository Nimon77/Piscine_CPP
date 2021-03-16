/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:05:31 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/16 17:52:16 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP

# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		~Sorcerer();

		std::string const	&getName() const;
		std::string const	&getTitle() const;

		void	introduce() const;
		void	polymorph(Victim const &) const;
	
	private:
		std::string _name;
		std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
