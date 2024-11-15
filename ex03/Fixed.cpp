/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:52:37 by kammi             #+#    #+#             */
/*   Updated: 2024/10/23 16:36:08 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
}

Fixed::Fixed(int const value): _value(value << _fractionalBits)
{
}

Fixed::Fixed(float const value): _value(roundf(value * (1 << _fractionalBits)))
{
}

Fixed	& Fixed::operator= (Fixed const &fixed)
{
	_value = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}


int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->_value / (1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

//Comparison operators

bool	Fixed::operator>(Fixed const & o) const
{
	return this->_value > o.getRawBits();
}

bool	Fixed::operator<(Fixed const & o) const
{
	return this->_value < o.getRawBits();
}

bool	Fixed::operator>=(Fixed const & o) const
{
	return this->_value >= o.getRawBits();
}

bool	Fixed::operator<=(Fixed const & o) const
{
	return this->_value <= o.getRawBits();
}

bool	Fixed::operator==(Fixed const & o) const
{
	return this->_value == o.getRawBits();
}

bool	Fixed::operator!=(Fixed const & o) const
{
	return this->_value != o.getRawBits();
}

//arithmetic operators

Fixed	Fixed::operator+(Fixed const &o) const
{
	Fixed	result;
	result.setRawBits(this->_value + o._value);
	return result;
}

Fixed	Fixed::operator-(Fixed const &o) const
{
	Fixed	result;
	result.setRawBits(this->_value - o._value);
	return result;
}

Fixed	Fixed::operator*(Fixed const &o) const
{
	Fixed	result;
	result.setRawBits((float)(this->_value) / (1 << this->_fractionalBits) * o._value);
	return result;
}

Fixed	Fixed::operator/(Fixed const &o) const
{
	Fixed result;
	result.setRawBits((this->_value << this->_fractionalBits) / o._value);
	return result;
}

//increment/decrement operators

Fixed	& Fixed::operator++(void)
{
	++_value;
	return *this; // retourne une reference a l''objet courant apres incrementation
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++_value;
	return tmp; // retourn la copie avant incrementation
}

Fixed	& Fixed::operator--(void)
{
	--_value;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--_value;
	return tmp;
}

Fixed	& Fixed::min(Fixed &ref1, Fixed &ref2)
{
	return (ref1._value > ref2._value? ref2 : ref1);
}

Fixed	& Fixed::max(Fixed &ref1, Fixed &ref2)
{
	return (ref1._value < ref2._value ? ref2 : ref1);
}

const Fixed	& Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	return (ref1._value > ref2._value? ref2 : ref1);
}

const Fixed	& Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	return (ref1._value < ref2._value? ref2 : ref1);
}



