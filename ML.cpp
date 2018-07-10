//============================================================================
// Name        : ML.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <armadillo>
#include "linearRegression.h"

using namespace std;

int main() {
	arma::Mat<double> p = arma::randu(4,4);
	arma::rowvec r = arma::randu<arma::rowvec>(4);

	LinearRegression* regr = new LinearRegression(p, r);


	std::cout << "p:\n" << p << "\n";
	std::cout << "r:\n" << r << "\n";

	std::cout << "parameter:\n" << regr->parameters << "\n";
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
