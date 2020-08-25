#include <iostream>
using namespace std;

class Addition {

	public:
		int add(int num1, int num2) {

			return num1 + num2;
		}

		double add(double num1, int num2) {

			return num1 + num2;
		}

		double add (int num1, int num2, double num3) {

			return num1 + num2 + num3;
		}
};

int main() {

	Addition addition;

	cout << "Addition of two integer value is: " << addition.add(10, 20) << endl;
	cout << "Addition of double and integer is: " << addition.add(5.5, 10) << endl;
	cout << "Addition of two integer and double is: " << addition.add(10, 20, 10.5) << endl;

	return 0;
}
