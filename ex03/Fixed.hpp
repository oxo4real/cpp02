/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:15:39 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 00:43:03 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
    private:
        int                 fixed_point;
        static const int    frac_bits = 8;
    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);
        Fixed(const Fixed& org);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed&  operator=(const Fixed& org);
        Fixed   operator+(const Fixed other);
        Fixed   operator-(const Fixed other);
        Fixed   operator*(const Fixed other);
        Fixed   operator/(const Fixed other);
        Fixed&  operator++(void);
        Fixed   operator++(int);
        bool    operator>(const Fixed& other) const;
        bool    operator<(const Fixed& other) const;
        bool    operator>=(const Fixed& other) const;
        bool    operator<=(const Fixed& other) const;
        bool    operator==(const Fixed& other) const;
        bool    operator!=(const Fixed& other) const;
        static const Fixed& max(const Fixed& a, const Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static       Fixed& max(Fixed& a, Fixed& b);
        static       Fixed& min(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& file_stream, const Fixed& fixed);

#endif
