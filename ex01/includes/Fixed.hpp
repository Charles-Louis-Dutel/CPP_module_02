/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:11:19 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/17 17:08:17 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & copy);
		Fixed( const int n);
		Fixed( const float f);
		~Fixed( void );

		Fixed	&operator=( Fixed const & inst );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					_raw_bits;
		static int const	_frac_bits;
};

std::ostream	&operator<<( std::ostream &o, Fixed const &inst);

#endif
