#include <iostream>
using namespace std;

int main() {

	int month = 0;
	int day = 0;

	 cout << "Enter Date: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;

	if(month > 12 || day > 31)
	{
		cout << "Enterde wrong date" << endl;
	}
	else
	{
		if(month >= 3 && month <= 6)
		{
			if(month == 3)
			{
				if(day >= 20)
				{
					cout << "TRUE " << endl;
				}
				else
				{
					cout << "FALSE " << endl;
				}
			}
			else if(month == 6)
			{
				if(day <= 20)
				{
					cout << "TRUE " << endl;
				}
				else
				{
					cout <<"FALSE " << endl;
				}
			}
			else
			{
				cout << "TRUE " << endl;
			}
		}
		else
		{
			cout << "FALSE " << endl;
		}
	}
}
