/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 05:34:01 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 06:29:17 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& org)
{
	*this = org;
}

Point::~Point(void) {}

Point&  Point::operator=(const Point& org)
{
	x = org.x;
	y = org.y;
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
