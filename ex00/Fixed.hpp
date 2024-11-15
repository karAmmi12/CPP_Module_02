/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:41:17 by kammi             #+#    #+#             */
/*   Updated: 2024/10/18 14:05:17 by kammi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		//constructeur par defaut
		Fixed();
		//constructeur par copie
		Fixed(Fixed const &fixed);
		//Surcharge de l'operateur
		Fixed & operator=(Fixed const &fixed);
		//Destructeur
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};




#endif
