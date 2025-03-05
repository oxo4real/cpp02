/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 04:34:03 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 01:26:15 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : fixed_point(0)
{
	//std::cout << "Default constructor called"
	//		  << std::endl;
}

Fixed::Fixed(const int i) :
    fixed_point(i << frac_bits)
{
	//std::cout << "Int constructor called"
	//		  << std::endl;
}

Fixed::Fixed(const float f) :
    fixed_point(roundf(f * (1 << frac_bits)))
{
	//std::cout << "Float constructor called"
	//		  << std::endl;
}

Fixed::Fixed(const Fixed& org)
{
	//std::cout << "Copy constructor called"
	//		  << std::endl;
	*this = org;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called"
	//		  << std::endl;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called"
	//		  << std::endl;
	return (fixed_point);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (1 << frac_bits));
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point >> frac_bits);
}

Fixed&	Fixed::operator=(const Fixed& org)
{
    //std::cout << "copy assignment operator called\n";
	if (this != &org)
        this->fixed_point = org.fixed_point;
    return (*this);
}

Fixed& Fixed::operator++(void)
{
	fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this; 
	fixed_point++;
	return (tmp);
}

Fixed  Fixed::operator+(const Fixed other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed  Fixed::operator-(const Fixed other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed  Fixed::operator*(const Fixed other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed  Fixed::operator/(const Fixed other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool    Fixed::operator>(const Fixed& other) const
{
	return(this->fixed_point > other.fixed_point);
}

bool    Fixed::operator<(const Fixed& other) const
{
	return(this->fixed_point < other.fixed_point);
}

bool    Fixed::operator>=(const Fixed& other) const
{
	return(this->fixed_point >= other.fixed_point);
}

bool    Fixed::operator<=(const Fixed& other) const
{
	return(this->fixed_point <= other.fixed_point);
}

bool    Fixed::operator==(const Fixed& other) const
{
	return(this->fixed_point == other.fixed_point);
}

bool    Fixed::operator!=(const Fixed& other) const
{
	return(this->fixed_point != other.fixed_point);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}

std::ostream&	operator<<(std::ostream& output_stream, const Fixed& fixed)
{
	output_stream << fixed.toFloat();
	return (output_stream);
}
