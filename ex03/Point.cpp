/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 05:34:01 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 22:06:47 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& org) : x(org.getx()), y(org.gety()) {}

Point::~Point(void) {}

Point&  Point::operator=(const Point& org)
{
	(void)org;
	return (*this);
}

float Point::getx(void) const
{
    return (x.toFloat());
}

float Point::gety(void) const
{
    return (y.toFloat());
}
