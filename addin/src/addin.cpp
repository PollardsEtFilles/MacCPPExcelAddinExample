/*
 *  Created on: July 8, 2015
 *      Author: peter lappo
 */

#include "addin.hpp"

#define EXPORT __attribute__((visibility("default")))

double notExported(double x, double y){
	return x + y;
}

extern "C" {
EXPORT double addNum(double x, double y){
		return x + y;
	}

EXPORT double addNum2(double x, double y) {
	     return notExported(x, y);
	}
}

