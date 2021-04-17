/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:50:20 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/17 19:44:40 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iterator>
# include <stack>

template <typename T >
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const &ref): std::stack<T>(ref) {};
		MutantStack &operator=(MutantStack const &ref) {
			if (this == &ref)
				return (*this);
			std::stack<T>::operator=(ref);
			return (*this);
		};
		virtual ~MutantStack() {};

		iterator		begin() { return std::stack<T>::c.begin(); }
		iterator		end() { return std::stack<T>::c.end(); }

		reverse_iterator	rbegin() { return std::stack<T>::c.rbegin(); }
		reverse_iterator	rend() { return std::stack<T>::c.rend(); }
};

#endif
