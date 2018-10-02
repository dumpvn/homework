#ifndef STARCOUNTER_H
#define STARCOUNTER_H


#include <iostream>
#include <vector>

#include "index.h"
#include "point.h"
#include "pointmap.h"



class StarCounter {

	std::vector<Point> stars;
	int N;
	int D;
	long Dsq;



public:
	StarCounter (int n, int d, std::istream& in);

	long countPairs();

private:
	long rangeCount (const Point& star, const PointMap& cubes);

	Index getCubeIndex(const Point& star) const;
};





#endif
