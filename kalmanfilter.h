/*******************************
  *Copyright (c) 2020.
  *All rights reserved.
  *Created by:      stand(TAN WEI)
  *e-mail: 1249928049@qq.com
  *Description:  kalman filter header                               
  *Version: 
********************************/
#pragma once
#include "Eigen/Dense"

class KalmanFilter{
public:

	KalmanFilter();
	~KalmanFilter();

	void Initialization(Eigen::VectorXd x_ini);

	bool IsInitialized();

	void SetF(Eigen::MatrixXd F_ini);

	void SetP(Eigen::MatrixXd P_ini);

	void SetQ(Eigen::MatrixXd Q_ini);

	void SetH(Eigen::MatrixXd H_ini);

	void SetR(Eigen::MatrixXd R_ini);

	void Prediction();

	void KFUpdade(Eigen::VectorXd z);

	Eigen::VectorXd GetX();

private:

	bool is_initialized;
	Eigen::VectorXd x_ini;
	Eigen::MatrixXd F_ini;
	Eigen::MatrixXd P_ini;
	Eigen::MatrixXd Q_ini;
	Eigen::MatrixXd H_ini;
	Eigen::MatrixXd R_ini;
};