/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:16:33 by nsimon            #+#    #+#             */
/*   Updated: 2021/04/13 17:38:45 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <stdexcept>

template<typename T>
class Array
{
	public:
		Array(): _size(0), _array(NULL) {}
		Array(unsigned int n): _size(n), _array(new T[n]()) {}
		Array(Array const &ref): _size(0), _array(NULL) { *this = ref; }
		Array &operator=(Array const &ref)
		{
			if (&ref == this)
				return *this;
			if (_size != ref._size)
			{
				if (_array != NULL)
					delete [] _array;
				_array = new T[ref._size]();
			}
			_size = ref._size;
			for (size_t i = 0; i < _size; i++)
				_array[i] = ref._array[i];
			return *this;
		}
		virtual ~Array()
		{
			if (_array != NULL)
				delete [] _array;
		}

		T	&operator[](size_t i) const
		{
			if (i >= _size || i < 0)
				throw std::out_of_range("out of range");
			return _array[i];
		}

		size_t	size() const { return _size; }

	private:
		size_t	_size;
		T		*_array;
};

#endif
