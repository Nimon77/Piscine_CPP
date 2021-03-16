/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:25:12 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/16 18:02:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP

# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {
	public:
		Victim();
		Victim(std::string name);
		~Victim();

		std::string const	getName() const;

		void	introduce() const;
		virtual void	getPolymorphed() const;
	private:
		std::string	_name;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
