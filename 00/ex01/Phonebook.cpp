/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:11:42 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/12 12:24:23 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	title()
{
	std::cout << " (                                                        " << std::endl;
	std::cout << " )\\ )    )                      (                )       " << std::endl;
	std::cout << "(()/( ( /(                (   ( )\\            ( /(       " << std::endl;
	std::cout << " /(_)))\\())  (    (      ))\\  )((_)  (    (   )\\())    " << std::endl;
	std::cout << "(_)) ((_)\\   )\\   )\\ )  /((_)((_)_   )\\   )\\ ((_)\\  " << std::endl;
	std::cout << "| _ \\| |(_) ((_) _(_/( (_))   | _ ) ((_) ((_)| |(_)      " << std::endl;
	std::cout << "|  _/| ' \\ / _ \\| ' \\))/ -_)  | _ \\/ _ \\/ _ \\| / /  " << std::endl;
	std::cout << "|_|  |_||_|\\___/|_||_| \\___|  |___/\\___/\\___/|_\\_\\  " << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to Phonebook !\nThe available entries are : " << std::endl;
	std::cout << " - ADD" << std::endl << " - SEARCH " << std::endl << " - EXIT" << std::endl << std::endl;
}

std::string	formatPrint(std::string str)
{
	int	lenght = 0;

	lenght = str.length();
	if (lenght > 10)
	{
		str.insert(9, ".");
		str.resize(10);
	}
	if (lenght < 10)
		for (int i = 0; i + lenght < 10; i++)
			str.insert(0, " ");
	return (str);
}

void	search(Contact list[8])
{
	std::string	choix;

	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  NickName|" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	for (int i = 0; i < 8 && !list[i]._empty; i++)
	{
		std::cout << "| " << "        " << i \
		<< "|" << formatPrint(list[i].getFirstName()) \
		<< "|" << formatPrint(list[i].getLastName()) \
		<< "|" << formatPrint(list[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "+-------------------------------------------+" << std::endl << std::endl;
	while (1)
	{
		std::cout << "What contact do you want ? ";
		std::getline(std::cin, choix);
		if (!choix.compare("EXIT") || !choix.compare("exit"))
			break;
		if (choix[0] - '0' < 8 && !list[choix[0] - '0']._empty)
		{
			std::cout << std::endl;
			list[std::stoi(choix)].print();
			break;
		}
		else
			std::cout << "Contact unknown" << std::endl;
	}
}

int	main()
{
	std::string	action;
	Contact		list[8];
	int			n = 0;

	title();
	while (true)
	{
		std::cout << "What do you want to do ? ";
		std::getline(std::cin, action);
		if (!action.compare("ADD"))
		{
			std::cout << std::endl;
			if (n < 8)
				list[n++].set();
			else
				std::cout << "Phonebook is full" << std::endl << std::endl;
		}
		else if (!action.compare("SEARCH"))
			search(list);
		else if (!action.compare("EXIT"))
			return (0);
		else
			std::cout << "Unknown action" << std::endl;
	}
	return (0);
}
