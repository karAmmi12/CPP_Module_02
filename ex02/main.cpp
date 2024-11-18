/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:30:27 by kammi             #+#    #+#             */
/*   Updated: 2024/11/16 17:55:26 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}



// int	main(void)
// {
// 	Fixed	a(42.42f);
// 	Fixed	b(10);
// 	Fixed	c(a);
// 	Fixed	d;

// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "b: " << b << std::endl;
// 	std::cout << "c: " << c << std::endl;
// 	std::cout << "d: " << d << std::endl;
// 	std::cout << std::endl;

// 	d = a + b;
// 	std::cout << "a + b = " << d << std::endl;

// 	d = a - b;
// 	std::cout << "a - b = " << d << std::endl;

// 	d = a * b;
// 	std::cout << "a * b = " << d << std::endl;

// 	d = a / b;
// 	std::cout << "a / b = " << d << std::endl;

// 	std::cout << std::endl;

// 	std::cout << "a > b: " << (a > b) << std::endl;
// 	std::cout << "a < b: " << (a < b) << std::endl;
// 	std::cout << "a >= b: " << (a >= b) << std::endl;
// 	std::cout << "a <= b: " << (a <= b) << std::endl;
// 	std::cout << "a <= c: " << (a <= c) << std::endl;
// 	std::cout << "a == b: " << (a == b) << std::endl;
// 	std::cout << "a != b: " << (a != b) << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
// 	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
// 	std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
// 	std::cout << "max(a, c): " << Fixed::max(a, c) << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "Incrementtation / decrementation" << std::endl;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "++a: " << ++a << std::endl;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "a++: " << a++ << std::endl;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "--a: " << --a << std::endl;
// 	std::cout << "a: " << a << std::endl;
// 	std::cout << "a--: " << a-- << std::endl;
// 	std::cout << "a: " << a << std::endl;

// 	return 0;
// }
