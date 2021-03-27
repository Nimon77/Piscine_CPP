/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 14:07:11 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/26 14:22:36 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int const gradeSign, int const gradeExec):
	_name(name),
	_gradeSign(gradeSign),
	_gradeExec(gradeExec),
	_signed(false)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException;
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException;
}

Form::Form(Form const &ref):
	_name(ref._name),
	_gradeSign(ref._gradeSign),
	_gradeExec(ref._gradeExec),
	_signed(false)
{}

Form::~Form() {}

std::string const	Form::getName() const { return _name; }
int				Form::getGradeSign() const { return _gradeSign; }
int				Form::getGradeExec() const { return _gradeExec; }
bool			Form::isSigned() const { return _signed; }

void	Form::beSigned(Bureaucrat const &bureau)
{
	if (bureau.getGrade() > _gradeSign)
		throw GradeTooLowException;
	else
		_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << ", Form can be signed by minimum grade " << rhs.getGradeSign()
		<< " and can be executed by minimum grade " << rhs.getGradeExec() << "." << std::endl;
	return o;
}
