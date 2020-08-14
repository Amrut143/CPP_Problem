#include <iostream>
using namespace std;

int main() {

	bool isPrime;
	int number = 0;

	cout << "Enter number: " ;
	cin >> number;

	for(int i=2; i*i <= number; i++)
	{
		if(number % i == 0)
		{
		isPrime = true;
		for(int j=2; j <= i/2; j++)
		{
			if(i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
			if(isPrime == true)
			{
				cout << "Prime factors of the number is:: " << i << endl;
			}
		}
	}
}
