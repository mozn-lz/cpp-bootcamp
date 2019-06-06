/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozn <mozn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:19:18 by msefako           #+#    #+#             */
/*   Updated: 2019/06/06 22:03:21 by mozn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int static fracBits = 8;

Fixed::Fixed(void) : fixPointVal(0){
    std::cout << "Default constructor called";
	return;
}

Fixed::Fixed(const Fixed &n){
	*this = n;
	std::cout << "Copy constructor called\n";
	return;    
}

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called\n";
	return (this->fixPointVal);
}

void    Fixed::setRawBits( int const raw ){
    std::cout << "Assignation operator called";
	return;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
	return;
}
