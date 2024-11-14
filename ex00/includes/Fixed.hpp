/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:11:19 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/14 18:09:04 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed const & copy);
		~Fixed( void );

		Fixed	&operator=( Fixed const & inst );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					_raw_bits;
		static int const	_frac_bits;
};

#endif
