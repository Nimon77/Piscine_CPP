/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 02:34:24 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 03:00:38 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref):
	Form(ref),
	_target(ref._target)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "* Bzzzzzzzzzz..... *" << std::endl;
	if (rand() & 1)
		std::cout << _target << " as been robotomized" << std::endl;
	else
		std::cout << "Can't robotomized " << _target << std::endl;
}
