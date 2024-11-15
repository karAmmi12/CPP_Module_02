/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:23:56 by kammi             #+#    #+#             */
/*   Updated: 2024/11/15 13:39:11 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int	main(void)
{
	// Triangle avec des coordonnées entières
	Point	a(0, 0);
	Point	b(50, 100);
	Point	c(100, 0);

	std::cout << "Triangle avec des coordonnées entières" << std::endl;
	std::cout << "a(" << a.getX() << ", " << a.getY() << ") b(" << b.getX() << ", " << b.getY() << ") c(" << c.getX() << ", " << c.getY() << ")" << std::endl;

	// Point à l'intérieur du triangle
	Point	p1(50, 50);

	std::cout << "Point (50, 50) est ";
	if (bsp(a, b, c, p1))
	{
		std::cout << "dans le triangle" << std::endl;
	} else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point sur le bord du triangle
	Point	p2(50, 0);

	std::cout << "Point (50, 0) est ";
	if (bsp(a, b, c, p2))
	{
		std::cout << "dans le triangle" << std::endl;
	} else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point à l'extérieur du triangle
	Point	p3(150, 150);

	std::cout << "Point (150, 150) est ";
	if (bsp(a, b, c, p3))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Triangle avec des coordonnées flottantes
	Point	d(0.5f, 0.5f);
	Point	e(1.5f, 1.0f);
	Point	f(2.0f, 0.5f);

	std::cout << std::endl;
	std::cout << "Triangle avec des coordonnées flottantes" << std::endl;
	std::cout << "d(" << d.getX() << ", " << d.getY() << ") e(" << e.getX() << ", " << e.getY() << ") f(" << f.getX() << ", " << f.getY() << ")" << std::endl;

	// Point à l'intérieur du triangle
	Point	p4(1.0f, 0.75f);
	std::cout << "Point (1.0, 0.75) est ";
	if (bsp(d, e, f, p4))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point sur le bord du triangle
	Point	p5(1.5f, 0.5f);

	std::cout << "Point (1.5, 0.5) est ";
	if (bsp(d, e, f, p5))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point à l'extérieur du triangle
	Point	p6(2.5f, 1.0f);

	std::cout << "Point (2.5, 1.0) est ";
	if (bsp(d, e, f, p6))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}


	// Triangle avec une combinaison de coordonnées entières et flottantes
	Point	g(0.5f, 0);
	Point	h(46.0f, 100);
	Point	i(97.89f, 0);

	std::cout << std::endl;
	std::cout << "Triangle avec une combinaison de coordonnées entières et flottantes" << std::endl;
	std::cout << "g(" << g.getX() << ", " << g.getY() << ") h(" << h.getX() << ", " << h.getY() << ") i(" << i.getX() << ", " << i.getY() << ")" << std::endl;

	// Point à l'intérieur du triangle
	Point	p7(35.0f, 48.5f);

	std::cout << "Point (35.0, 48.5) est ";
	if (bsp(g, h, i, p7))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point sur le bord du triangle
	Point	p8(46.0f, 0);

	std::cout << "Point (46.0, 0) est ";
	if (bsp(g, h, i, p8))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point à l'extérieur du triangle
	Point	p9(100.0f, 100.0f);

	std::cout << "Point (100.0, 100.0) est ";
	if (bsp(g, h, i, p9))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	//Triangle avec des coordonnées négatives
	Point	j(-50, -50);
	Point	k(-100, -50);
	Point	l(-75, -100);

	std::cout << std::endl;
	std::cout << "Triangle avec des coordonnées négatives" << std::endl;
	std::cout << "j(" << j.getX() << ", " << j.getY() << ") k(" << k.getX() << ", " << k.getY() << ") l(" << l.getX() << ", " << l.getY() << ")" << std::endl;

	// Point à l'intérieur du triangle
	Point	p10(-75, -75);

	std::cout << "Point (-75, -75) est ";
	if (bsp(j, k, l, p10))
	{
		std::cout << "dans le triangle" << std::endl; 
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point sur le bord du triangle
	Point	p11(-75, -50);

	std::cout << "Point (-75, -50) est ";
	if (bsp(j, k, l, p11))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	// Point à l'extérieur du triangle
	Point	p12(-25, -25);

	std::cout << "Point (-25, -25) est ";
	if (bsp(j, k, l, p12))
	{
		std::cout << "dans le triangle" << std::endl;
	}
	else
	{
		std::cout << "hors du triangle" << std::endl;
	}

	return 0;
}
