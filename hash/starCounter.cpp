/*
 * starCounter.cpp
 *
 *  Created on: Oct 20, 2013
 *      Author: Steven Zeil
 */

#include <algorithm>
#include <limits>
#include <unordered_map>

#include "index.h"
#include "point.h"
#include "pointmap.h"
#include "starCounter.h"

using namespace std;


//***  Set up a hash function for the Index type


StarCounter::StarCounter(int n, int d, istream& in)
: N(n), D(d)
{
	Dsq = (long)D * (long)D;
	stars.reserve(N);

	for (int i = 0; i < N; ++i) {
		Point star;
		in >> star.x >> star.y >> star.z;
		stars.push_back (star);

		if (!in)
		{
			cerr << "error reading point " << i << " out of " << N << endl;
			exit(1);
		}
	}


}


Index StarCounter::getCubeIndex(const Point& star) const
{
	Index result{star.x / D,
		star.y / D,
		star.z / D};
	return result;
}


/**
 * Return the number of stars that are within (less than) distance d of star.
 */
long StarCounter::rangeCount (const Point& star, const PointMap& cubes)
{
	long count = 0L;

	Index starBase = getCubeIndex(star);


	//*** Loop through the cubes around starBase

	//***    For each such cube, loop through the points in that
	//***    cube and check to see how many are less than d away
	//***    from star.

	
	return count;
}

long StarCounter::countPairs() {
	// Build a hash table of stars, grouped by "corners" of d*d*d cubes

    PointMap cubes;

	cubes.reserve(N);
	
	for (const Point& p: stars)
	{
	  //*** Insert p into the appropriate location in cubes.
	}


	// Count the neighbors of each point
	long count = 0;
	for (const Point& star: stars)
	{
		long c = rangeCount(star, cubes);
		//cerr << "Count for " << star << " is " << c << endl;
		count += c - 1;  // Subtract 1 because the point (star,star)
		                 //  shouldn't count
	}
	return count;
}




