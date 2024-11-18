/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:41:21 by kammi             #+#    #+#             */
/*   Updated: 2024/11/16 17:56:50 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//constructeur par defaut
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
//constructeur par copie
Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}
//Surcharge de l'operateur
Fixed & Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed() // Destructeur
{
	std::cout << "Destructor called" << std::endl;
}

//getters and setters

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
