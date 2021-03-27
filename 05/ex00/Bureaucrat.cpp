/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:10:49 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/26 13:48:23 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &ref): _name(ref._name), _grade(ref._grade) {}

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException;
	else if (grade > 150)
		throw GradeTooLowException;
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &ref)
{
	if (this == &ref)
        return *this;
	_grade = ref._grade;
	return *this;
}

std::string const Bureaucrat::getName() const { return _name; }
int	Bureaucrat::getGrade() const { return _grade; }

void	Bureaucrat::gradeInc()
{
	if (_grade == 1)
		throw GradeTooHighException;
	else
		_grade -= 1;
}

void	Bureaucrat::gradeDec()
{
	if (_grade == 150)
		throw GradeTooLowException;
	else
		_grade += 1;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return o;
}
