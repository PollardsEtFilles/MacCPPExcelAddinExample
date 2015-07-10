//============================================================================
// Name        : SharedMainClang.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <addin.hpp>

int main() {

	if (addNum(1,2) != 3) {
		cerr << "FAIL: Wrong number from addnum expected 3 and got " << addNum(1,2) << endl;
	} else {
		cout << "PASS: Correct number from addnum expected 3 and got " << addNum(1,2) << endl;
	}

	return 0;
}
