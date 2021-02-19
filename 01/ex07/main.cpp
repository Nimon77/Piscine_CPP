/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 16:43:28 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/19 20:45:36 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream inputFile(argv[1]);
		if (!inputFile.is_open())
		{
			std::cout << "Erreur lors de l'ouverture du fichier" << std::endl;
			return -1;
		}
		std::string	outputFileName = argv[1];
		for (std::string::size_type i = 0; i < outputFileName.length(); i++)
			outputFileName[i] = std::toupper(outputFileName[i]);
		std::ofstream outputFile(outputFileName + ".replace");
		if (!outputFile.is_open())
		{
			std::cout << "Erreur lors de la creation du fichier de sortie" << std::endl;
			return -1;
		}
		std::string line;
		std::size_t found = -1;
		while (std::getline(inputFile, line))
		{
			while ((found = line.find(argv[2], found + 1)) != std::string::npos)
				line.replace(found, ((std::string)argv[2]).length(), argv[3]);
			outputFile << line << std::endl;
		}
	}
}
