class Shape
{
	public:
		virtual double Area() = 0;
		virtual void Print() = 0;
};

class Circle: public Shape
{
	public:
		double Area() override
		{
			// Returns area
		}
		void Print() override
		{
			// Prints it out
		}
};

class Triangle: public Shape
{
	public:
		double Area() override
		{
			// Returns area
		}
		void Print() override
		{
			// Prints it out
		}
};