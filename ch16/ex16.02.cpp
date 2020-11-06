#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	
	const string title  = "Vowel Finder 9000";
	const char vowels[] = {'a','e','i','o','u'};

	cout << title << endl;
	cout << string(title.length(),'-') << endl << endl;

	string input;
	cout << "Enter a sentence or something:" << endl;
	while(input.length() == 0){
		cout << "> ";
		getline(cin, input);
	}

	// Convert to lower-case for case insensitivity
	string input_lower = input;
	transform(input_lower.begin(), input_lower.end(), input_lower.begin(), ::tolower);
	
	unsigned short master_count = 0;
	cout << endl << "Vowels found in your string:" << endl;
	
	// Loop through each vowel
	for(const char& vowel: vowels)
	{
		// Count each occurrance of vowel
		unsigned short vowel_count = 0;
		size_t pos = 0;
		while((pos = input_lower.find(vowel, pos)) != string::npos)
		{
			++vowel_count;
			++pos;
		}

		// Display count if found
		if(vowel_count)
		{
			cout << vowel << ": " << vowel_count << endl;
			master_count += vowel_count;
		}
	}
	
	// Display nothing if no vowels were found
	if(!master_count)
	{
		cout << "None found!" << endl;
	}

	// Mix it up
	cout << endl << "Converted to kRaZyCaSe:" << endl;
	for(size_t x=0; x<input_lower.length(); ++x)
	{
		if(x&1)
		{
			input_lower[x] = std::toupper(input_lower[x]);
		}
	}
	cout << input_lower << endl;

	return 0;
}

