/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:50:01 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 03:01:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const &name, int const gradeSign, int const gradeExec);
		Form(Form const &ref);
		virtual ~Form();

		std::string const	getName() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		bool		isSigned() const;

		void		beSigned(Bureaucrat const &);

		virtual void	execute(Bureaucrat const & executor) const = 0;

	private:
		Form();
		Form &operator=(Form const &ref);

		std::string const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
		bool				_signed;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "grade is too high";
			}
		} GradeTooHighException;

		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "grade is too low";
			}
		} GradeTooLowException;

		class NotSignedException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Form is not signed";
			}
		} NotSignedException;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
