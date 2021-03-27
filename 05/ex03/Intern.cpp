/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 03:38:47 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 04:20:10 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* createShrubberyCreationForm(std::string const &target) { return new ShrubberyCreationForm(target); }
Form* createRobotomyRequestForm(std::string const &target) { return new RobotomyRequestForm(target); }
Form* createPresidentialPardonForm(std::string const &target) { return new PresidentialPardonForm(target); }

Intern::Intern() {}

Intern::~Intern() {}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	typedef Form* (*function)(std::string const &target);
	typedef struct {
		std::string const name;
		function form;
	} FormList;

	FormList list[3] = {
		{ "shrubbery creation", &createShrubberyCreationForm},
		{ "robotomy request", &createRobotomyRequestForm},
		{ "presidential pardon", &createPresidentialPardonForm}
	};
	for (int i = 0; i < 3; i++)
		if (list[i].name == name)
		{
			Form *form = list[i].form(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	std::cout << "Form requested unknown" << std::endl;
	return (NULL);
}
