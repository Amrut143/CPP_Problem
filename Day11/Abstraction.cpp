#include <iostream>
using namespace std;

class Student {

	private:
		string name;
		int phyMark;
		int mathMark;

	public:
		void setData(string name, int phyMark, int mathMark) {

			this -> name = name;
			this -> phyMark = phyMark;
			this -> mathMark = mathMark;
		}

	private:
		int getAverage() {

			return (phyMark + mathMark) / 2;
		}

	public:
		void display() {

			cout << "StudentName: " << name << "\nPhyMark: " << phyMark << "\nMathMark: " << mathMark << "\nAverageMark: " << getAverage() << endl;
		}
};

int main() {

	Student student;

	student.setData("Deepak", 78, 87);
	student.display();
}
