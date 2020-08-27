#include <iostream>
using namespace std;

class Animal {

	public:
	virtual void sleep() {

		cout << "Animals are sleeping" << endl;
	}
};

class Tiger : public Animal {

	public:
	void sleep() {

		cout << "Tigers are sleeping" << endl;
	}
};

int main() {

	Animal* animal = new Animal();
	animal -> sleep();

	Tiger* tiger = new Tiger();
	tiger -> sleep();

	Animal* animal1 = new Tiger();
	animal1 -> sleep();
}
