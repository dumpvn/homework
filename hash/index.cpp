/*
 * index.cpp
 *
 *  Created on: Jun 21, 2017
 *      Author: zeil
 */

#include "index.h"

using namespace std;


ostream& operator<< (ostream& out, const Index& indx)
{
	out << "[" << indx.i << "," << indx.j << "," << indx.k << "]";
	return out;
}


bool operator== (const Index& left, const Index& right)
{
	return (left.i == right.i ) &&
			(left.j == right.j ) &&
			(left.k == right.k );
}




