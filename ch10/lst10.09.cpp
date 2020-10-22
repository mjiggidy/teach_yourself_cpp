#include <iostream>

using namespace std;

class Motor
{
	public:
		void SwitchIgnition()
		{
			cout << "Ignition ON" << endl;
		}

		void PumpFuel()
		{
			cout << "Fuel in cylinders" << endl;
		}

		void FireCylinders()
		{
			cout << "Vrooooom hahaahaha" << endl;
		}
};

class Car: protected Motor
{
	public:
		void Move()
		{
			SwitchIgnition();
			PumpFuel();
			FireCylinders();
		}
};

class Racecar: private Car
{
	public:
		void Move()
		{
			SwitchIgnition();
			PumpFuel();
			FireCylinders();
			FireCylinders();
			FireCylinders();
		}
};

int main()
{
	Racecar dreamCar;
	dreamCar.Move();

	return 0;
}