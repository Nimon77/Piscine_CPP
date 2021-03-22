/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:21:38 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 20:07:55 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria() {};
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		~AMateria();

		AMateria & operator=(AMateria const & rhs);

		std::string const &	getType() const;
		unsigned int		getXP() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter & target);

	private:
		std::string		_type;
		unsigned int	_xp;
};

#endif
