/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:47:30 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/08 19:17:28 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_HPP
# define INC_HPP

# include <iostream>
# include <unistd.h>

class Base { public: virtual ~Base(); };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * geerate(void);
void identify_from_pointer(Base * p);
void identify_from_reference(Base & p);

#endif
