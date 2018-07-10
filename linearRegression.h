/*
 * linearRegression.h
 *
 *  Created on: Jul 10, 2018
 *      Author: kevinyan
 */

#ifndef LINEARREGRESSION_H_
#define LINEARREGRESSION_H_

#include <iostream>
#include <armadillo>

class LinearRegression {
public:
	LinearRegression(const arma::mat& predictors, const arma::rowvec& responses);

	LinearRegression();

	void Train(const arma::mat& predictors, const arma::rowvec& responses);

	void Predict(const arma::mat& data, arma::rowvec& predictions);

	double ComputeError(const arma::mat& data,
	                    const arma::rowvec& responses);


	arma::vec parameters;

private:

//	arma::mat& predictors;
//	arma::rowvec& responses;



};

#endif /* LINEARREGRESSION_H_ */
