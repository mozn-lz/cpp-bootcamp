/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozn <mozn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:19:14 by msefako           #+#    #+#             */
/*   Updated: 2019/06/06 22:08:31 by mozn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>

class Fixed
{
    private:
        int fixPointVal;
        int static const fracBits;
    public:
        Fixed();
        Fixed(const Fixed &n);
        // assignation operator overload
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
		
		Fixed & operator=(Fixed const & res);
        ~Fixed();
};

#endif // !FIXED_CLASS_HPP