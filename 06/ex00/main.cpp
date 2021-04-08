/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:54:40 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/02 20:24:05 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "convSca.hpp"

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		convSca conv(argv[1]);
		try
		{
			std::cout << "char: " << static_cast<char>(conv) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			std::cout << "int: " << static_cast<int>(conv) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			if (conv.isInt())
				std::cout << "float: " << static_cast<float>(conv) << ".0f" << std::endl;
			else
				std::cout << "float: " << static_cast<float>(conv) << "f" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
		if (conv.isInt())
			std::cout << "double: " << static_cast<double>(conv) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(conv) << std::endl;
	}
}
