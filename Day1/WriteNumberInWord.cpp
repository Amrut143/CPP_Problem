#include <iostream>
using namespace std;

int main() {
	int number;
	cout<<"Enter the Number: ";
	cin>>number;
	switch(number) {
	case 1:
			cout<< "one ";
			break;
	case 2:
			cout<< "two ";
			break;
	case 3:
			cout<< "three ";
			break;
	case 4:
			cout<< "four ";
			break;
	case 5:
			cout<< "five ";
			break;
	case 6:
			cout<< "six ";
			break;
	case 7:
			cout<< "seven ";
			break;
	case 8:
			cout<< "eight ";
			break;
	case 9:
			cout<< "nine ";
			break;
	case 0:
			cout<< "zero ";
			break;
	default:
		cout<< "You entered invalid number ";
		break;
	}
	return 0;
}
