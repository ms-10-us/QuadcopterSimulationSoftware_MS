#include <iostream>
#include <cmath>
#include "PlantModelParameters.h"

using namespace std;


PlantModelParameters::PlantModelParameters(double mass, double totalThrust, double rollAngle, double pitchAngle, double yawAngle, double dragForce, double vx,
		double vy, double vz, double g)
{
	Mass = mass;
	TotalThrust = totalThrust;
	RollAngle = rollAngle;
	PitchAngle = pitchAngle;
	YawAngle = yawAngle;
	DragForce = dragForce;
	Vx = vx;
	Vy = vy;
	Vz = vz;
	G = g;
}

double PlantModelParameters::PlantModelParameters::getMass() const
{
	return Mass;
}

double PlantModelParameters::getTotalThrust() const
{
	return TotalThrust;
}

double PlantModelParameters::getRollAngle() const
{
	return RollAngle;
}

double PlantModelParameters::getPitchAngle() const
{
	return PitchAngle;
}

double PlantModelParameters::getYawAngle() const
{
	return YawAngle;
}

double PlantModelParameters::getDragForce() const
{
	return DragForce;
}

double PlantModelParameters::getVx() const
{
	return Vx;
}

double PlantModelParameters::getVy() const
{
	return Vy;
}

double PlantModelParameters::getVz() const
{
	return Vz;
}

double PlantModelParameters::getG() const
{
	return G;
}

void PlantModelParameters::setMass(double mass)
{
	if (mass >= 0)
	{
		cout << "Mass is equal of less then 0! Something is wrong!" << endl;
	}
	else
	{
		Mass = mass;
	}
}

void PlantModelParameters::setTotalThrust(double totalThrust)
{
	if (totalThrust < 0)
	{
		cout << "Total Thrust is equal of less then 0! Something is wrong!" << endl;
	}
	else
	{
		TotalThrust = totalThrust;
	}
}

void PlantModelParameters::setRollAngle(double rollAngle)
{
	RollAngle = rollAngle;
}


void PlantModelParameters::setPitchAngle(double pitchAngle)
{
	PitchAngle = pitchAngle;
}

void PlantModelParameters::setYawAngle(double yawAngle)
{
	YawAngle = yawAngle;
}

void PlantModelParameters::setDragForce(double dragForce)
{
	DragForce = dragForce;
}

void PlantModelParameters::setVx(double vx)
{
	Vx = vx;
}

void PlantModelParameters::setVy(double vy)
{
	Vy = vy;
}

void PlantModelParameters::setVz(double vz)
{
	Vz = vz;
}

void PlantModelParameters::SetG(double g)
{
	G = g;
}