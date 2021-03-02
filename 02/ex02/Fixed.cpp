/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <nsimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:16:38 by nsimon            #+#    #+#             */
/*   Updated: 2021/03/02 19:21:27 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _rawBits(0) {}

Fixed::Fixed(int const value): _rawBits(value << this->_fBits) {}

Fixed::Fixed(float const value) {
	this->_rawBits = (int)roundf(value * (1 << this->_fBits));
}

Fixed::Fixed(Fixed const &copy) {
	*this = copy;
}

Fixed::~Fixed() {}

int		Fixed::getRawBits() const {
	return _rawBits;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

float	Fixed::toFloat() const {
	return ((float)this->_rawBits / (1 << this->_fBits));
}

int		Fixed::toInt() const {
	return this->_rawBits >> this->_fBits;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	this->_rawBits = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const &rhs) const { return this->_rawBits > rhs.getRawBits(); }
bool	Fixed::operator<(Fixed const &rhs) const { return this->_rawBits < rhs.getRawBits(); }
bool	Fixed::operator>=(Fixed const &rhs) const { return this->_rawBits >= rhs.getRawBits(); }
bool	Fixed::operator<=(Fixed const &rhs) const { return this->_rawBits <= rhs.getRawBits(); }
bool	Fixed::operator==(Fixed const &rhs) const { return this->_rawBits == rhs.getRawBits(); }
bool	Fixed::operator!=(Fixed const &rhs) const { return this->_rawBits != rhs.getRawBits(); }

Fixed	Fixed::operator+(Fixed const &rhs) {
	Fixed	tmp(*this);
	tmp.setRawBits(this->_rawBits + rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(Fixed const &rhs) {
	Fixed	tmp(*this);
	tmp.setRawBits(this->_rawBits - rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*(Fixed const &rhs) {
	Fixed	tmp;
	tmp.setRawBits(this->_rawBits * rhs.getRawBits() >> this->_fBits);
	return tmp;
}

Fixed	Fixed::operator/(Fixed const &rhs) {
	Fixed	tmp;
	tmp.setRawBits((this->_rawBits << this->_fBits) / rhs.getRawBits());
	return tmp;
}

Fixed	&Fixed::operator++(void) {
	this->_rawBits++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--(void) {
	this->_rawBits--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) { return (a < b ? a : b); }
Fixed const &Fixed::min(Fixed const &a, Fixed const &b) { return (a < b ? a : b); }

Fixed	&Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }
Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) { return (a > b ? a : b); }

std::ostream &operator<<(std::ostream &o, const Fixed &fixe) {
	return (o << fixe.toFloat());
}
