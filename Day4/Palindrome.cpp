#include <iostream>
using namespace std;

int main() {

	int num, reminder, reverse = 0, temp;

	cout << "Enter the Number: ";
	cin >> num;

	temp = num;
	while(num > 0) {
		reminder = num % 10;
		reverse = (reverse * 10) + reminder;
		num = num / 10;
	}
	if(temp == reverse) {
		cout << "Number is Palindrome" << endl;
	}
	else {
		cout<<"Number is not Palindrome" << endl;
	}
	return 0;
}
