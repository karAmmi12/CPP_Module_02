/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:41:14 by kammi             #+#    #+#             */
/*   Updated: 2024/11/15 14:44:02 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a; // on cree un objet de type Fixed
	Fixed b(a); // on cree un objet de type Fixed et on lui passe en parametre un objet de type Fixed et on appelle le constructeur par copie
	Fixed c; // on cree un objet de type Fixed

	c = b; // on appelle l'operateur d'affectation

	std::cout << a.getRawBits()  << std::endl; // on affiche la valeur de l'objet a
	std::cout << b.getRawBits() << std::endl; // on affiche la valeur de l'objet b
	std::cout << c.getRawBits() << std::endl; // on affiche la valeur de l'objet c

	return 0;
}
