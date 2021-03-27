/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 02:52:23 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 03:00:14 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &ref);
		virtual ~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &ref);

		std::string const	_target;
};

#endif
