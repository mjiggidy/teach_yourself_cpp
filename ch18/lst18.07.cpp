#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
	for(auto el = container.cbegin(); el != container.cend(); ++el)
	{
		cout << *el << '\t';
	}
	cout << endl;
}

struct ContactItem
{
	string name;
	string phone;
	string displayAs;

	ContactItem(const string& conName, const string& conNum)
	{
		name = conName;
		phone = conNum;
		displayAs = (name + ":\t" + phone);
	}

	// used by list::remove()
	bool operator == (const ContactItem& comp) const
	{
		return (comp.name == this->name);
	}

	bool operator < (const ContactItem& comp) const
	{
		return (this->name < comp.name);
	}

	operator const char*() const
	{
		return displayAs.c_str();
	}
};

bool SortOnPhoneNumber(const ContactItem& l, const ContactItem& r)
{
	return (l.phone < r.phone);
}

int main()
{
	list<ContactItem> contacts;
	contacts.push_back(ContactItem("Michael Jordan", "555.323.3028"));
	contacts.push_back(ContactItem("Joy Fu", "444.818.6696"));
	contacts.push_back(ContactItem("Dawn Jordan", "999.810.2674"));

	cout << "List in initial order:" << endl;
	DisplayContents(contacts);

	contacts.sort();
	cout << "Sorting by name (using operator overload):" << endl;
	DisplayContents(contacts);

	contacts.sort(SortOnPhoneNumber);
	cout << "Sorting by telephone number (with predicate sort func):" << endl;
	DisplayContents(contacts);

	return 0;
}