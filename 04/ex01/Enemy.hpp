/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:35:25 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/17 23:55:36 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP

# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & copy);
		virtual ~Enemy();

		Enemy &operator=(Enemy const & rhs);

		std::string const & getType() const;
		int	getHP() const;

		virtual void	takeDamage(int);
	
	private:
		unsigned int	_HP;
		std::string		_type;
};

#endif
