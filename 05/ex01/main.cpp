/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:36:27 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/26 14:31:37 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat Tom("Tom", 1);
	Bureaucrat Bert("Bert", 150);

	std::cout << Tom << Bert << std::endl;

	try
	{
		Form test("test", 1, 160);
		std::cout << test;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Form Billing("Billing", 20, 1);
	std::cout << Billing;

	Bert.signForm(Billing);
	Tom.signForm(Billing);
}
