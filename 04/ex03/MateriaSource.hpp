/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:22:12 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 20:11:10 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource() {};
		MateriaSource(MateriaSource const &);
		~MateriaSource();

		MateriaSource & operator=(MateriaSource const &);

		void	learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);

	private:
		AMateria	*_list[4];
};

#endif
