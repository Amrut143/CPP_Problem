#include <iostream>
using namespace std;

class Bank {

	public:
	virtual int getRateOfInterest() = 0;
};

class StateBank : public Bank {

	public:
	int getRateOfInterest() {
		return 7;
	}
};

class ICICIBank : public Bank {

	public:
	int getRateOfInterest() {
		return 8;
	}
};

int main() {

	Bank *bank;
	StateBank sbi;
	ICICIBank icici;

	bank = &sbi;
	cout << "Rate of interest of sbi bank is: " << bank -> getRateOfInterest() << endl;

	bank = &icici;
	cout << "Rate of interest of icici bank is: " << bank -> getRateOfInterest() << endl;
}
