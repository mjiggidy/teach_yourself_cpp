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

class Car: private Motor
{
	public:
		void Move()
		{
			SwitchIgnition();
			PumpFuel();
			FireCylinders();
		}
};

int main()
{
	Car dreamCar;
	dreamCar.Move();

	return 0;
}