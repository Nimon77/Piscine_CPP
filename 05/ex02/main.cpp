/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:36:27 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 03:16:51 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat Tom("Tom", 1);
	Bureaucrat Bert("Bert", 150);

	std::cout << Tom << Bert << std::endl;

	std::cout << std::endl;

	ShrubberyCreationForm Shrubbery("Shrubbery");
	std::cout << Shrubbery;

	try
	{
		Shrubbery.execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bert.signForm(Shrubbery);
	Tom.signForm(Shrubbery);

	try
	{
		Shrubbery.execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;

	RobotomyRequestForm Robotomy("Robotomy");
	std::cout << Robotomy;

	try
	{
		Robotomy.execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bert.signForm(Robotomy);
	Tom.signForm(Robotomy);

	try
	{
		Robotomy.execute(Bert);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Robotomy.execute(Tom);
		Robotomy.execute(Tom);
		Robotomy.execute(Tom);
		Robotomy.execute(Tom);
		Robotomy.execute(Tom);
		Robotomy.execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;

	PresidentialPardonForm President("President");
	std::cout << President;

	try
	{
		President.execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bert.signForm(President);
	Tom.signForm(President);

	try
	{
		President.execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	Bert.executeForm(Shrubbery);
	Bert.executeForm(Robotomy);
	Bert.executeForm(President);

	std::cout << std::endl;

	Tom.executeForm(Shrubbery);
	Tom.executeForm(Robotomy);
	Tom.executeForm(President);
}
