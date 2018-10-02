/*
 * point.cpp
 *
 *  Created on: Jun 21, 2017
 *      Author: zeil
 */

#include "point.h"

using namespace std;

long Point::distanceSq(const Point& p) const
{
	long dx = x - p.x;
	long dy = y - p.y;
	long dz = z - p.z;
	return dx*dx + dy*dy + dz*dz;
}

ostream& operator<< (ostream& out, const Point& p)
{
	out << "(" << p.x << "," << p.y << "," << p.z << ")";
	return out;
}


bool operator== (const Point& left, const Point& right)
{
	return (left.x == right.x ) &&
			(left.y == right.y ) &&
			(left.z == right.z );
}




