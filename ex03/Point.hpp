/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:53:04 by kammi             #+#    #+#             */
/*   Updated: 2024/10/23 15:38:33 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const		_x;
		Fixed const		_y;

	public:
		Point();
		~Point();
		Point(float const x, float const y);
		Point(Point const &point);

		Point	&operator=(Point const & point);

		Fixed const	&getX(void) const;
		Fixed const	&getY(void) const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);
#endif
