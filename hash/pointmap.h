/*
 * pointmap.h
 *
 *  Created on: Jun 21, 2017
 *      Author: zeil
 */

#ifndef POINTMAP_H_
#define POINTMAP_H_

#include <unordered_map>
#include "index.h"
#include "point.h"

typedef std::unordered_multimap<Index, Point> PointMap;



#endif /* POINTMAP_H_ */
