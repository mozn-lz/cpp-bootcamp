/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Id_number.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msefako <msefako@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 01:32:09 by msefako           #+#    #+#             */
/*   Updated: 2019/06/13 01:59:56 by msefako          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



class Id_number
{
    private:
        /* data */
    public:
        Id_number(/* args */);
        void    str_to_int(std::string str);
        void    str_to_float(std::string str);
        void    str_to_double(std::string str);
        void    str_to_string(std::string str);
        ~Id_number();
};


