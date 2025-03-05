/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:15:39 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/04 23:53:56 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed
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
        Fixed& operator=(const Fixed& org);
};

std::ostream& operator<<(std::ostream& file_stream, const Fixed& fixed);

#endif
