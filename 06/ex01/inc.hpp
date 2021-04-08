/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:02:42 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/08 19:51:11 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_HPP
# define INC_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <unistd.h>
# include <cstdlib>

struct Data { std::string s1; int n; std::string s2; };

void * serialize(void);
Data * deserialize(void * raw);

#endif
