/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:15:39 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/04 23:54:05 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class   Fixed
{
    private:
        int                 fixed_point;
        static const int    frac_bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& org);
        Fixed& operator=(const Fixed& org);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
