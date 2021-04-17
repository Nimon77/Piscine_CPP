/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:36:07 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/17 20:01:00 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>
# include <algorithm>
# include <iterator>
# include <climits>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &ref);
		Span &operator=(Span const &ref);
		virtual ~Span();

		void	addNumber(int);

		template<class Iterator>
		void	addNumber(Iterator start, Iterator end)
		{
			if (end - start <= _max)
				std::copy(start, end, std::back_inserter(_values));
			else
				throw NotEnoughSpace;
		}

		int		shortestSpan();
		int		longestSpan();

	private:
		Span();

		unsigned int const	_max;
		std::vector<int>	_values;

		class exceptSpan: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Can't span";
			}
		} exceptSpan;

		class NotEnoughSpace: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Not enough space";
			}
		} NotEnoughSpace;
};

#endif
