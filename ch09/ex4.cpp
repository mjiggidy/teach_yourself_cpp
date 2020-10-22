#include <iostream>

using namespace std;

class Circle
{
	private:
		const double PI;
		const double radius;
	
	public:
		Circle(double inputRadius): radius(inputRadius), PI(3.14159265){}
		~Circle()
		{
			cout << "Aint no circle no more heh heh" << endl;
		}
	
	double Circumference()
	{
		return 2 * PI * radius;
	}

	double Area()
	{
		return PI * radius * radius;
	}
};

int main()
{

	double inputRadius = 0.0;
	cout << "Give me the radius of a circle, man: ";
	cin >> inputRadius;

	Circle myCircle(inputRadius);

	cout << "That circle has a circumference of " << myCircle.Circumference() << " and an area of " << myCircle.Area() << endl;

	return 0;
}