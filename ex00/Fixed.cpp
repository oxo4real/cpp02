/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 04:34:03 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/04 04:57:35 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : fixed_point(0)
{
    std::cout << "Default constructor called"
              << std::endl;
}

Fixed::Fixed(const Fixed& org)
{
    std::cout << "Copy constructor called"
              << std::endl;
    *this = org;
}

Fixed&  Fixed::operator=(const Fixed &org)
{
    std::cout << "copy assignment operator called\n";
    if (this != &org)
        this->fixed_point = org.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called"
              << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"
              << std::endl;
    return (fixed_point);
}
