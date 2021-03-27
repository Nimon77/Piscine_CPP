/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:36:27 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/26 13:47:22 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Robert("Robert", 0);
		std::cout << Robert;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Paul("Paul", 1);
		std::cout << Paul;
		Paul.gradeInc();
		std::cout << Paul;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Brunot("Brunot", 160);
		std::cout << Brunot;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat Toto("Toto", 150);
		std::cout << Toto;
		Toto.gradeDec();
		std::cout << Toto;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
