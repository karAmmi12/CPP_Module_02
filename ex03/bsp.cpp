/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:52:44 by kammi             #+#    #+#             */
/*   Updated: 2024/11/15 12:18:36 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

static Fixed	abs(Fixed const a)
{
	return (a < 0 ? (a * -1) : a);
} // cette fonction retourne la valeur absolue d'un nombre

static Fixed	area(Point const a, Point const b, Point const c)
{
	return abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
}// cette fonction calcule l'aire d'un triangle

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	abc = abs(area(a, b, c));
	Fixed	abp = abs(area(a, b, point));
	Fixed	acp = abs(area(a, c, point));
	Fixed	bcp = abs(area(b, c, point));
	return (abc == abp + acp + bcp); // elle retourne true si le point est dans le triangle et false sinon
}
