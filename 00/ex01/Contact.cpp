/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:33:32 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/12 11:57:33 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{ this->_empty = 1; }

Contact::~Contact() { }

void	Contact::set()
{
	std::string	value;

	std::cout << "First name ? ";
	std::getline(std::cin, value);
	this->setFirstName(value);

	std::cout << "Last name ? ";
	std::getline(std::cin, value);
	this->setLastName(value);

	std::cout << "Nickname ? ";
	std::getline(std::cin, value);
	this->setNickName(value);

	std::cout << "Login ? ";
	std::getline(std::cin, value);
	this->setLogin(value);

	std::cout << "Postal address ? ";
	std::getline(std::cin, value);
	this->setPostal(value);

	std::cout << "Email address ? ";
	std::getline(std::cin, value);
	this->setEmail(value);

	std::cout << "Phone number ? ";
	std::getline(std::cin, value);
	this->setPhone(value);

	std::cout << "Birthday date ? ";
	std::getline(std::cin, value);
	this->setBirthday(value);

	std::cout << "Favorite meal ? ";
	std::getline(std::cin, value);
	this->setFavMeal(value);

	std::cout << "Underwear color ? ";
	std::getline(std::cin, value);
	this->setUnderwearColor(value);

	std::cout << "Darkest secret ? ";
	std::getline(std::cin, value);
	this->setDarkSecret(value);
	std::cout << std::endl;

	this->_empty = 0;
}

void	Contact::print()
{
	std::cout << "First name: " << this->getFirstName() << std::endl;
	std::cout << "Last name: " << this->getLastName() << std::endl;
	std::cout << "Nick name: " << this->getNickName() << std::endl;
	std::cout << "Login: " << this->getLogin() << std::endl;
	std::cout << "Postal address: " << this->getPostal() << std::endl;
	std::cout << "Email address: " << this->getEmail() << std::endl;
	std::cout << "Phone number: " << this->getPhone() << std::endl;
	std::cout << "Birthday date: " << this->getBirthday() << std::endl;
	std::cout << "Favorite meal: " << this->getFavMeal() << std::endl;
	std::cout << "Underwear color: " << this->getUnderwearColor() << std::endl;
	std::cout << "Darkest secret: " << this->getDarkSecret() << std::endl << std::endl;
}

// ================================================================
// ========================= Setter ===============================
// ================================================================

void	Contact::setFirstName(std::string value)
{ this->firstName = value; }

void	Contact::setLastName(std::string value)
{ this->lastName = value; }

void	Contact::setNickName(std::string value)
{ this->nickName = value; }

void	Contact::setLogin(std::string value)
{ this->login = value; }

void	Contact::setPostal(std::string value)
{ this->postal = value; }

void	Contact::setEmail(std::string value)
{ this->email = value; }

void	Contact::setPhone(std::string value)
{ this->phone = value; }

void	Contact::setBirthday(std::string value)
{ this->birthday = value; }

void	Contact::setFavMeal(std::string value)
{ this->favMeal = value; }

void	Contact::setUnderwearColor(std::string value)
{ this->underwearColor = value; }

void	Contact::setDarkSecret(std::string value)
{ this->darkSecret = value; }

// ================================================================
// ========================= Getter ===============================
// ================================================================

const std::string	&Contact::getFirstName()
{ return this->firstName; }

const std::string	&Contact::getLastName()
{ return this->lastName; }

const std::string	&Contact::getNickName()
{ return this->nickName; }

const std::string	&Contact::getLogin()
{ return this->login; }

const std::string	&Contact::getPostal()
{ return this->postal; }

const std::string	&Contact::getEmail()
{ return this->email; }

const std::string	&Contact::getPhone()
{ return this->phone; }

const std::string	&Contact::getBirthday()
{ return this->birthday; }

const std::string	&Contact::getFavMeal()
{ return this->favMeal; }

const std::string	&Contact::getUnderwearColor()
{ return this->underwearColor; }

const std::string	&Contact::getDarkSecret()
{ return this->darkSecret; }
