/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:23:35 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 14:15:53 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ZombieHorde test(std::atoi(argv[1]));
		test.announce();
	}
	return 0;
}
