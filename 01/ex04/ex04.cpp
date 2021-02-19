/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 14:21:59 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 14:26:11 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *brain_ptr = &brain;
	std::string &brain_ref = brain;

	std::cout << "brain = " << brain << std::endl;
	std::cout << "brain_ptr = " << *brain_ptr << std::endl;
	std::cout << "brain_ref = " << brain_ref << std::endl;
}
