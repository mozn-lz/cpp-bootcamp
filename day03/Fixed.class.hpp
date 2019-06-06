/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <msefako@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:19:14 by msefako           #+#    #+#             */
/*   Updated: 2019/06/06 19:51:20 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int fixPointVal;
        int static const fracBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &fc);
        // assignation operator overload
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

Fixed::Fixed(/* args */)
{
    fixPointVal = 0;
    std::cout << "Default constructor called";
    
}

Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed &fc){
    
}

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called";
}

void    Fixed::setRawBits( int const raw ){
    std::cout << "Assignation operator called";
}
