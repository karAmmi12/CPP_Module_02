/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:52:55 by kammi             #+#    #+#             */
/*   Updated: 2024/11/15 12:23:30 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point(float const x, float const y): _x(x) , _y(y)
{
}

Point::Point(Point const &point): _x(point.getX()), _y(point.getY())
{

}
Point	& Point::operator=(Point const &point)
{
	(void) point;
	return *this;
}

Fixed const	&Point::getX(void) const
{
	return _x;
}

Fixed const	&Point::getY(void) const
{
	return _y;
}

