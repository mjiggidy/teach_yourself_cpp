#include <iostream>
#include <string>

using namespace std;

class President
{
	/* Private constructors for a singleton */
	private:
		President() {};	// private default constructor
		President(const President&); // private copy constructor
		const President& operator=(const President&);	// private assignment operator
	
		string name;

	public:
		static President& GetInstance()
		{
			// Static objects are constructed only once
			static President onlyInstance;
			return onlyInstance;
		}

		string GetName()
		{
			return name;
		}

		void SetName(string inputName)
		{
			name = inputName;
		}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Poopy Man");

	cout << "The name of the President is: ";
	cout << President::GetInstance().GetName() << endl;

	return 0;
}