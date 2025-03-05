/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 05:27:04 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 06:12:35 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class   Point
{
	private:
	    Fixed   x;
		Fixed   y;
	public:
	    Point(void);
		Point(const float x, const float y);
		Point(const Point& org);
		~Point(void);
		Point&  operator=(const Point& org);
		float getx(void) const;
		float gety(void) const;
};

#endif
