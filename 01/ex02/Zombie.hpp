/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:27 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 13:07:05 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie();

		void	advert();

	private:
		std::string	_name;
		std::string _type;
};

#endif
