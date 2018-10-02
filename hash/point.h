/*
 * point.h
 *
 *  Created on: Jun 21, 2017
 *      Author: zeil
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>

struct Point {
	int x, y, z;

	long distanceSq(const Point& p) const;

};

std::ostream& operator<< (std::ostream& out, const Point& p);

bool operator== (const Point& left, const Point& right);




#endif /* POINT_H_ */
