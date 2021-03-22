/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:25:14 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/22 17:58:24 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP

# define SQUAD_HPP

# include <iostream>
# include <list>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		Squad(Squad const & copy);
		~Squad();

		Squad & operator=(Squad const & rhs);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
	private:
		typedef struct	s_list {
			ISpaceMarine	*unit;
			s_list			*next;
		}				t_list;
		int		_size;
		t_list	*_list;
};

#endif
