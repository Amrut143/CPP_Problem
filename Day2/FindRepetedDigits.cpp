#include <iostream>
using namespace std;

int main() {

	int digits[10];
	int i;

	for(i = 1; i <= 100; i++)
	{
		if(i % 11 == 0)
		{
			digits[i] = i;
			cout << "Repeted digits are: " << digits[i] << endl;
		}
	}
	return 0;
}
