#include <iostream>
using namespace std;

int main() {

	int digits[10];
	int number = 0;

	for(int i = 1; i <= 100; i++)
	{
		if(i % 11 == 0)
		{
			digits[number] = i;
			number++;
		}
	}

	cout << "Repeted digits are: " << endl;
	for(int i = 0; i < number; i++)
	{
		cout << digits[i] << endl;
	}
	return 0;
}
