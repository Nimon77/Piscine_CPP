/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 12:43:54 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/26 14:30:45 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const &ref);
		Bureaucrat &operator=(Bureaucrat const &ref);
		virtual ~Bureaucrat();

		std::string	const getName() const;
		int			getGrade() const;

		void		gradeInc();
		void		gradeDec();

	private:
		Bureaucrat();

		std::string	const	_name;
		int					_grade;
		
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error: Grade is too high";
			}
		} GradeTooHighException;

		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Error: Grade is too low";
			}
		} GradeTooLowException;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
