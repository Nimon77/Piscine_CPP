/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 01:14:54 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/27 02:58:35 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref):
	Form(ref),
	_target(ref._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream	file;

	file.open(_target + "_shrubbery", std::ios::trunc);
	file.write(
		"          .     .  .      +     .      .          .\n"
		"     .       .      .     #       .           .\n"
		"        .      .         ###            .      .      .\n"
		"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
		"          .      . \"####\"###\"####\"  .\n"
		"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
		"  .             \"#########\"#########\"        .        .\n"
		"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
		"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
		"                .\"##\"#####\"#####\"##\"           .      .\n"
		"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
		"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
		"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
		"            .     \"      000      \"    .     .\n"
		"       .         .   .   000     .        .       .\n"
		".. .. ..................O000O........................ ......\n", 843
	);
	file.close();
}
