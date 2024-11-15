/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:30:27 by kammi             #+#    #+#             */
/*   Updated: 2024/11/04 13:42:41 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed	a;
	Fixed	const b(Fixed( 5.05f ) * Fixed( 2 ));
	Fixed	const c(Fixed( 5.05f ) + Fixed( 2 ));
	Fixed	const d(Fixed( 5.05f ) - Fixed( 2 ));
	Fixed	const e(Fixed( 5.05f ) / Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	return 0;
}
