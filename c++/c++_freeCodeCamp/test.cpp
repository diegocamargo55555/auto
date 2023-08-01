#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
	float i = 0, d = 5, r;
	r = d/i;	
	cout << r << endl;

	if (__INT32_MAX__ < r)
	{
		cout << "grande" << endl;
	}

	if (__INT16_MAX__ == r)
	{
		cout << "igual" << endl;
	}
	cout << INT16_MAX <<endl;
}

