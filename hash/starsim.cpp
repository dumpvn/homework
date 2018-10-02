/*
 * starsim_zeil.cpp
 *
 *  Created on: Oct 20, 2013
 *      Author: Steven Zeil
 */

#include <algorithm>
#include <fstream>
#include <iostream>
#include <limits>
#include <unordered_map>
#include <vector>

#include "point.h"
#include "starCounter.h"

using namespace std;






void solve (istream& in)
{
   int N, D;
   in >> N >> D;
   StarCounter sim (N, D, in);
   long t = sim.countPairs();
   cout << t/2L << endl;
}



int main (int argc, char** argv)
{
	if (argc > 1)
	{
		ifstream in (argv[1]);
		solve (in);
	}
	else
		solve(cin);
	return 0;
}
