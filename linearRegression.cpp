
#include "linearRegression.h"

LinearRegression::LinearRegression() {

}

LinearRegression::LinearRegression(const arma::mat& predictors,
		const arma::rowvec& responses) {
	//predictors(predictors), responses(responses) {

	Train(predictors, responses);
}

void LinearRegression::Train(const arma::mat& predictors,
		const arma::rowvec& responses) {

	arma::mat p = predictors;
	arma::rowvec r = responses;

	solve(parameters, p * trans(p), p * trans(r));

}

void LinearRegression::Predict(const arma::mat& data,
		arma::rowvec& predictions) {
	if (data.n_rows == parameters.n_rows) {

		predictions = arma::trans(parameters) * data;

	}

}

double LinearRegression::ComputeError(const arma::mat& data,
		const arma::rowvec& responses) {

	arma::rowvec temp;
	arma::rowvec predict;

	Predict(data, predict);

	temp = responses - predict;

	double res = arma::dot(temp, temp) / data.n_cols;

	return res;

}

