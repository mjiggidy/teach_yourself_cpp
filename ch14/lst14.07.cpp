#include <iostream>
#include <string>

using namespace std;

template <typename Res, typename ValType>
void Sum(Res& result, ValType& val)
{
	return result + val;
}

template <typename Res, typename First, typename... Rest>

void Sum(Res& result, First val1, Rest... valN)
{
	result = result + val1;
	Sum(result, valN ...);
}


int main()
{
	double dResult = 0;
	Sum(dResult, 3.14, 4.56, 1.111);
	cout << "dResult = " << dResult << endl;

	string strResult;
	Sum(strResult, "Hello ", "World " , "poopy");
	cout << "strResult = " << strResult.c_str() << endl;

	return 0;
}