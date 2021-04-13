/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:16:05 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/13 16:11:12 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> vide;
	Array<int> taille(10);

	std::cout << "vide size = " << vide.size() << " : ";
	for (size_t i = 0; i < vide.size(); i++)
		std::cout << vide[i] << " ";
	std::cout << std::endl;

	std::cout << "taille size = " << taille.size() << " : ";
	for (size_t i = 0; i < taille.size(); i++)
		std::cout << taille[i] << " ";
	std::cout << std::endl;
	
	taille[3] = 42;
	taille[7] = 192;

	std::cout << "taille size = " << taille.size() << " : ";
	for (size_t i = 0; i < taille.size(); i++)
		std::cout << taille[i] << " ";
	std::cout << std::endl;


	std::cout << std::endl << "copy(taille)" << std::endl;
	Array<int> copy(taille);

	try
	{
		vide[0] = 15;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		copy[9] = 12;
		copy[10] = 12;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "taille size = " << taille.size() << " : ";
	for (size_t i = 0; i < taille.size(); i++)
		std::cout << taille[i] << " ";
	std::cout << std::endl;

	std::cout << "copy size = " << copy.size() << " : ";
	for (size_t i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << std::endl;

	std::cout << std::endl << "taille = copy" << std::endl;
	taille = copy;

	taille[1] = 55;
	copy[0] = 10;

	std::cout << "taille size = " << taille.size() << " : ";
	for (size_t i = 0; i < taille.size(); i++)
		std::cout << taille[i] << " ";
	std::cout << std::endl;

	std::cout << "copy size = " << copy.size() << " : ";
	for (size_t i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << std::endl;

	return 0;
}
