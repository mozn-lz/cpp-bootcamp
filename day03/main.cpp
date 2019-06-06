/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <msefako@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:19:36 by msefako           #+#    #+#             */
/*   Updated: 2019/06/06 19:27:25 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}