/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:11:50 by nsimon            #+#    #+#             */
/*   Updated: 2021/02/12 10:46:32 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	public:
		Contact();
		~Contact();

		bool	_empty;

		void	setFirstName(std::string value);
		void	setLastName(std::string value);
		void	setNickName(std::string value);
		void	setLogin(std::string value);
		void	setPostal(std::string value);
		void	setEmail(std::string value);
		void	setPhone(std::string value);
		void	setBirthday(std::string value);
		void	setFavMeal(std::string value);
		void	setUnderwearColor(std::string value);
		void	setDarkSecret(std::string value);

		const std::string	&getFirstName();
		const std::string	&getLastName();
		const std::string	&getNickName();
		const std::string	&getLogin();
		const std::string	&getPostal();
		const std::string	&getEmail();
		const std::string	&getPhone();
		const std::string	&getBirthday();
		const std::string	&getFavMeal();
		const std::string	&getUnderwearColor();
		const std::string	&getDarkSecret();

		void	set();
		void	print();
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	login;
		std::string	postal;
		std::string	email;
		std::string	phone;
		std::string	birthday;
		std::string	favMeal;
		std::string	underwearColor;
		std::string	darkSecret;
};

#endif
