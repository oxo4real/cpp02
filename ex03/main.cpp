/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 04:31:20 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/05 06:45:50 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool    bsp( Point const a, Point const b, Point const c, Point const point);

int     main( void ) {
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 4);

    Point p(1, 2);

    if (bsp(a, b ,c ,p))
        std::cout << "In" << std::endl;
    else
         std::cout << "Out" << std::endl;
    return 0;
}
