/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:36:27 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 04:32:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Tom("Tom", 1);
	Bureaucrat Bert("Bert", 150);

	Intern Steave;

	std::cout << Tom << Bert << std::endl;

	std::cout << std::endl;

	Form* Shrubbery = Steave.makeForm("shrubbery creation", "Shrubbery");
	std::cout << *Shrubbery;

	try
	{
		Shrubbery->execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bert.signForm(*Shrubbery);
	Tom.signForm(*Shrubbery);

	try
	{
		Shrubbery->execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;

	Form* Robotomy = Steave.makeForm("robotomy request", "Robotomy");
	std::cout << *Robotomy;

	try
	{
		Robotomy->execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bert.signForm(*Robotomy);
	Tom.signForm(*Robotomy);

	try
	{
		Robotomy->execute(Bert);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Robotomy->execute(Tom);
		Robotomy->execute(Tom);
		Robotomy->execute(Tom);
		Robotomy->execute(Tom);
		Robotomy->execute(Tom);
		Robotomy->execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}



	std::cout << std::endl;

	Form* President = Steave.makeForm("presidential pardon", "President");
	std::cout << *President;

	try
	{
		President->execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bert.signForm(*President);
	Tom.signForm(*President);

	try
	{
		President->execute(Tom);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	Bert.executeForm(*Shrubbery);
	Bert.executeForm(*Robotomy);
	Bert.executeForm(*President);

	std::cout << std::endl;

	Tom.executeForm(*Shrubbery);
	Tom.executeForm(*Robotomy);
	Tom.executeForm(*President);

	std::cout << std::endl;

	Steave.makeForm("bad form", "bad");

	delete Shrubbery;
	delete Robotomy;
	delete President;
}
