/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:11:05 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/17 17:25:59 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed( void ) : _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = n << this->_frac_bits;
}

Fixed::Fixed( const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(f * (1 << this->_frac_bits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const & inst)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = inst.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_raw_bits / (float)(1 << this->_frac_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_raw_bits >> this->_frac_bits);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &inst)
{
	o << inst.toFloat();
	return (o);
}
