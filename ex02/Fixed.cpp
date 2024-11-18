/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:01:47 by kammi             #+#    #+#             */
/*   Updated: 2024/11/16 17:55:43 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(int const value): _value(value << _fractionalBits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value): _value(roundf(value * (1 << _fractionalBits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}


Fixed & Fixed::operator = (Fixed const &fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}

//surcharge de l'operateur <<

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" <<std::endl;
}

int		Fixed::getRawBits(void) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_fractionalBits));
}


int		Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

//operateurs de comparaison

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

//operateurs arithmetiques

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


// Fixed	Fixed::operator*(Fixed const &o) const
// {
// 	return Fixed(this->toFloat() * o.toFloat());
// }

Fixed Fixed::operator*(Fixed const &o) const
{
	Fixed result;
	result.setRawBits((this->_value * o._value) >> _fractionalBits);
	return result;
}

Fixed	Fixed::operator/(Fixed const &o) const
{
	Fixed	result;
	if (!o._value)
	{
		std::cout << "Error: Division by zero" << std::endl;
		//return Fixed();
	}
	result.setRawBits((this->_value << _fractionalBits) / o._value);
	return result;
}

//operateurs d'incrementation/decrementation

Fixed	& Fixed::operator++(void)
{
	++_value;
	return *this;
} // pre-incrementation : ++a : on incremente la valeur de a avant de l'utiliser dans une expression

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++_value;
	return tmp;

} // post-incrementation : a++ : on incremente la valeur de a apres l'avoir utilisee dans une expression

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


Fixed & Fixed::min(Fixed &ref1, Fixed &ref2)
{
	return (ref1._value > ref2._value ? ref2 : ref1);
}

Fixed & Fixed::max(Fixed &ref1, Fixed &ref2)
{
	return (ref1._value < ref2._value ? ref2 : ref1);
}
const Fixed & Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	return (ref1._value > ref2._value ? ref2 : ref1);
}
const Fixed & Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	return (ref1._value < ref2._value ? ref2 : ref1);
}



