/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:10:40 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/18 12:48:19 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Fixed.hpp"

/*Main du sujet*/
// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }


/*Mon main de test*/
int main( void ) {
	Fixed a(10);
	Fixed b(15.789f);
	Fixed c(10);
	Fixed d;
	std::string res;

	std::cout << "Testing comparison operator" << std::endl;
	res = (a > b) ? "true" : "false";
	std::cout << "a > b" << std::endl;
	std::cout << a << " > " << b << " : " << res << std::endl << std::endl;

	res = (a < b) ? "true" : "false";
	std::cout << "a < b" << std::endl;
	std::cout << a << " < " << b << " : " << res << std::endl << std::endl;

	res = (a >= c) ? "true" : "false";
	std::cout << "a >= c" << std::endl;
	std::cout << a << " >= " << c << " : " << res << std::endl;
	res = (a >= b) ? "true" : "false";
	std::cout << "a >= b" << std::endl;
	std::cout << a << " >= " << b << " : " << res << std::endl << std::endl;

	res = (a <= c) ? "true" : "false";
	std::cout << "a <= c" << std::endl;
	std::cout << a << " <= " << c << " : " << res << std::endl;
	res = (a <= b) ? "true" : "false";
	std::cout << "a <= b" << std::endl;
	std::cout << a << " <= " << b << " : " << res << std::endl << std::endl;

	res = (a == c) ? "true" : "false";
	std::cout << "a == c" << std::endl;
	std::cout << a << " == " << c << " : " << res << std::endl;
	res = (a == b) ? "true" : "false";
	std::cout << "a == b" << std::endl;
	std::cout << a << " == " << b << " : " << res << std::endl << std::endl;

	res = (a != c) ? "true" : "false";
	std::cout << "a != c" << std::endl;
	std::cout << a << " != " << c << " : " << res << std::endl;
	res = (a != b) ? "true" : "false";
	std::cout << "a != b" << std::endl;
	std::cout << a << " != " << b << " : " << res << std::endl << std::endl;


	std::cout << "Testing arithmetic operator" << std::endl;
	std::cout << "d before : " << d << std::endl;
	d = a + b;
	std::cout << "d = a + b;    d = " << d << std::endl;
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl << std::endl;


	std::cout << "Testing arithmetic operator" << std::endl;
	std::cout << "a before pre-increment : " << a << std::endl;
	std::cout << "pre-incrementing a : " << ++a << std::endl;
	std::cout << "a after pre-increment : " << a << std::endl;
	std::cout << "post-incrementing a : " << a++ << std::endl;
	std::cout << "a after post-increment : " << a << std::endl;
	std::cout << "pre-decrementing a : " << --a << std::endl;
	std::cout << "a after pre-decrement : " << a << std::endl;
	std::cout << "post-decrementing a : " << a-- << std::endl;
	std::cout << "a after post-decrement : " << a << std::endl << std::endl;

	std::cout << "Testing min and max" << std::endl;
	std::cout << "Maximum between a : " << a << " and b : " << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "Minimum between a : " << a << " and b : " << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}

