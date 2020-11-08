#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void DisplayVector(const vector<T>& vec)
{
	if(vec.empty())
	{
		cout << "Vector is currently empty." << endl;
		return;
	}

	cout << "Vector has " << vec.size() << " element(s):" << endl;
	for(size_t x=0; x<vec.size(); ++x)
	{
		cout << vec[x] << '\t';
	}
	cout << endl;
}

template<typename T>
void AddToVector(vector<T>& vec)
{
	int val = 0;
	cout << "Add value to vector:" <<endl;
	cout << "> ";
	cin >> val;
	vec.push_back(val);
	cout << "Value " << val << " has been inserted as element #" << vec.size() << endl;
}

template<typename T>
void GetIndex(const vector<T>& vec)
{
	if(vec.empty())
	{
		cout << "Vector is currently empty." << endl;
		return;
	}
	
	int idx = 0;
	cout << "Choose the index you wish to view (0-" << vec.size()-1 << "):" << endl;
	cout << "> ";
	cin >> idx;
	
	if(!(idx < vec.size())){
		cout << "Index " << idx << " is out of bounds." << endl;
		return;
	}

	cout << "Value at index " << idx << " is: " << vec[idx] << endl;
}

template<typename T>
void FindValue(const vector<T>& vec)
{
	if(vec.empty())
	{
		cout << "Vector is currently empty." << endl;
		return;
	}

	int val = 0;
	cout << "Enter a value you'd like to find in the vector:" << endl;
	cout << "> ";
	cin >> val;
	

	vector<T>::const_iterator idx = find(vec.cbegin(), vec.cend(), val);
	if(idx != vec.cend())
	{
		cout << "Value " << val << " first found at index " << distance(vec.cbegin(), idx) << endl;
	}
	else
	{
		cout << "Value " << val << " want not found in the vector." << endl;
	}
}

int DisplayMenu()
{
	cout << "Main Menu:" << endl;
	cout << "1: Display entire vector" << endl;
	cout << "2: Display value at vector index" << endl;
	cout << "3: Add value to vector" << endl;
	cout << "4: Find a value in the vector" << endl;
	cout << "5: Quit" << endl;
	
	int choice = 0;
	while(choice < 1 || choice > 5)
	{
		cout << "> ";
		cin >> choice;
	}
	return choice;
}

int main()
{
	cout << "Vectorbot 9000" << endl;
	cout << "==============" << endl;

	vector<int> vec;

	while(1)
	{
		cout << endl;
		int choice = DisplayMenu();
		cout << endl;

		switch(choice){
			case 1:
				DisplayVector(vec);
				break;
			case 2:
				GetIndex(vec);
				break;
			case 3:
				AddToVector(vec);
				break;
			case 4:
				FindValue(vec);
			break;
			default:
				cout << "Goodbye forever." << endl;
				return 0;
		}
	}

	return 0;
}
