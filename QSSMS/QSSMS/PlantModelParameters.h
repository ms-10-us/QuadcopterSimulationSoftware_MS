#pragma once
#ifndef PLANTMODELPARAMETERS_H

class PlantModelParameters
{
private:
	double Mass; //kg
	double TotalThrust; //N
	double RollAngle; //rad
	double PitchAngle; //rad
	double YawAngle; //rad
	double DragForce; //N
	double Vx; //m/s
	double Vy; //m/s
	double Vz; //m/s
	double G; //m/s2

public:

	PlantModelParameters(double mass, double totalThrust, double rollAngle, double pitchAngle, double yawAngle, double dragForce, double vx,
		double vy, double vz, double g);

	double getMass() const;

	double getTotalThrust() const;

	double getRollAngle() const;

	double getPitchAngle() const;

	double getYawAngle() const;

	double getDragForce() const;

	double getVx() const;

	double getVy() const;

	double getVz() const;

	double getG() const;

	void setMass(double mass);

	void setTotalThrust(double totalThrust);

	void setRollAngle(double rollAngle);

	void setPitchAngle(double pitchAngle);

	void setYawAngle(double yawAngle);

	void setDragForce(double dragForce);

	void setVx(double vx);

	void setVy(double vy);

	void setVz(double vz);

	void SetG(double g);
};

#endif // !PLANTMODELPARAMETERS_H

