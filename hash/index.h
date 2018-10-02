/*
 * index.h
 *
 *  Created on: Jun 21, 2017
 *      Author: zeil
 */

#ifndef INDEX_H_
#define INDEX_H_

#include <iostream>

// Indices of our imaginary cubes in space.

struct Index {
	int i, j, k;

};

std::ostream& operator<< (std::ostream& out, const Index& ind);

bool operator== (const Index& left, const Index& right);




#endif /* INDEX_H_ */
