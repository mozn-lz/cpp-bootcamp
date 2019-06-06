/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashulha <ashulha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:06:09 by ashulha           #+#    #+#             */
/*   Updated: 2017/07/06 18:44:20 by ashulha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _fixedPointValue;
	static const int _fracBits;

public:
	Fixed(void);
	Fixed(Fixed const & n);
	Fixed(int const num);
	Fixed(float const num);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

	Fixed & operator=(Fixed const & res);
	Fixed & operator-(Fixed const & res);
	Fixed & operator/(Fixed const & res);
	Fixed operator*(Fixed const & res);
	Fixed operator+(Fixed const & res);

	bool operator<(Fixed const & res);
	bool operator<=(Fixed const & res);
	bool operator>(Fixed const & res);
	bool operator>=(Fixed const & res);
	bool operator==(Fixed const & res);
	bool operator!=(Fixed const & res);

	Fixed & operator++(void); //prefix
	Fixed & operator--(void);
	Fixed operator++(int);  //postfix
	Fixed operator--(int);

	~Fixed(void);
	static const Fixed & max(Fixed const & a, Fixed const & b);
	static const Fixed & min(Fixed const & a, Fixed const & b);
};

std::ostream & operator<<(std::ostream & o, Fixed const & res);

#endif
