/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kammi <kammi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:41:10 by kammi             #+#    #+#             */
/*   Updated: 2024/10/21 17:24:03 by kammi            ###   ########.fr       */
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
		Fixed();
		Fixed(Fixed const &fixed);
		Fixed & operator= (Fixed const &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed(int const value);
		Fixed(float const value);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		//comparison operators
		bool	operator>(Fixed const & o) const;
		bool	operator<(Fixed const & o) const;
		bool	operator>=(Fixed const & o) const;
		bool	operator<=(Fixed const & o) const;
		bool	operator==(Fixed const & o) const;
		bool	operator!=(Fixed const & o) const;

		//arithmetic operators
		Fixed	operator+( Fixed const &o ) const ;
		Fixed	operator-(Fixed const &o) const;
		Fixed	operator*(Fixed const &o) const;
		Fixed	operator/(Fixed const &o) const;

		//increment/decrement operators
		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static Fixed &min(Fixed &ref1, Fixed &ref2);
		static Fixed &max(Fixed &ref1, Fixed &ref2);
		static const Fixed	&min(Fixed const &ref1, Fixed const &ref2);
		static const Fixed	&max(Fixed const &ref1, Fixed const &ref2);



};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif
