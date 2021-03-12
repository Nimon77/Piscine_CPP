/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:02:57 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/12 17:28:54 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP

# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &copy);
		~NinjaTrap();

		NinjaTrap & operator=(NinjaTrap const &rhs);

		void	ninjaShoebox(ClapTrap & target);
		void	ninjaShoebox(FragTrap & target);
		void	ninjaShoebox(ScavTrap & target);
		void	ninjaShoebox(NinjaTrap & target);
};

#endif
