#include <iostream>
#include <string>
#include <set>

using namespace std;

template<typename T>
void DisplayContents(const T& container)
{
	for(T::const_iterator t = container.cbegin(); t != container.cend(); ++t)
	{
		cout << *t << '\t';
	}
	cout << endl;
}

struct ContactItem
{
	string name;
	string phone;
	string display;

	ContactItem(const string& nameInit, const string& phoneInit): name(nameInit), phone(phoneInit)
	{
		display = (name + ": " + phone);
	}

	bool operator == (const ContactItem& comp) const
	{
		return comp.name == this->name;
	}

	bool operator < (const ContactItem& comp) const
	{
		return this->name < comp.name;
	}

	operator const char*() const
	{
		return display.c_str();
	}
};

int main()
{
	set<ContactItem> setContacts;

	setContacts.insert("Michael Jordan", "810-323-3028");
	setContacts.insert("Joy Fu", "555-818-6696");
	setContacts.insert("Dawn Jordan", "222-810-2674");
	setContacts.insert("Hurstburger Inc.", "223-411-8008");

	DisplayContents(setContacts);

	string inputName;
	cout << "Enter a name you wish to delete:" << endl;
	cout << "> ";
	getline(cin, inputName);

	set<ContactItem>::iterator t = setContacts.find(ContactItem(inputName,""));

	if(t != setContacts.end())
	{
		setContacts.erase(t);
		cout << inputName << " has been erased without a thought.  Contents are now:" << endl;
		DisplayContents(setContacts);
	}

	else
	{
		cout << "Contact not found." << endl;
	}
	
	return 0;
}