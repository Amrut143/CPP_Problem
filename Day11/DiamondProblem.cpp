#include <iostream>
using namespace std;

class A {

	protected:
		int num1 = 2, num2 = 4;

	public:
		void add() {

			cout << "A class addition of two numbers is: " << num1 + num2 << endl;
		}
};

class B : virtual public A {

	public:
		void add() {

			cout << "B class addition is: " << num1 + num2 << endl;
		}
};

class C : virtual public A {

	public:
		void add() {

			cout << " C class addition is: " << num1 + num2 << endl;
		}
};

class D : public B, public C {
};

int main() {

	D d;

	d.add();

	return 0;
}
