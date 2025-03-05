/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 05:46:06 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 06:29:01 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   abs(float f);

bool    bsp( Point const a, Point const b, Point const c, Point const point)
{
    float area1 = (1.0 / 2) * abs((a.getx() * (point.gety() - b.gety()) 
                                        + point.getx() * (b.gety() - a.gety())
                                        + b.getx() * (a.gety() - point.gety())));
    
    float area2 = (1.0 / 2) * abs((c.getx() * (point.gety() - b.gety()) 
                                        + point.getx() * (b.gety() - c.gety())
                                        + b.getx() * (c.gety() - point.gety())));
    
    float area3 = (1.0 / 2) * abs((a.getx() * (point.gety() - c.gety()) 
                                        + point.getx() * (c.gety() - a.gety())
                                        + c.getx() * (a.gety() - point.gety())));

    float total_area = (1.0 / 2) * abs((a.getx() * (c.gety() - b.gety())
                                            + c.getx() * (b.gety() - a.gety())
                                            + b.getx() * (a.gety() - c.gety())));

    if (area1 == 0 || area2 == 0 || area3 == 0
        || total_area != area1 + area2 + area3)
        return (false);
    return (true);
}

float   abs(float f)
{
    if (f < 0)
        return (-f);
    return (f);
}
