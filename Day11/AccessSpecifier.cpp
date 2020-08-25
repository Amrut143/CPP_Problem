#include <iostream>
using namespace std;

class Square;

class Rectangle {

	private:
	int width;

	protected:
		int height;

	public:
		void setRectangle(int width, int height) {

			this -> width = width;
			this -> height = height;
		}

		friend void calculateArea(Rectangle, Square);
};

class Square {

	private:
		int side;

	public:
		void setSquare(int side) {

			this -> side = side;
		}

		friend void calculateArea(Rectangle, Square);
};

void calculateArea(Rectangle rec, Square sq) {

	cout << "Area of rectangle: " << rec.width * rec.height << endl;
	cout << "Area of square: " << sq.side * sq.side << endl;
}

int main() {

	Rectangle rec;
	rec.setRectangle(5, 10);

	Square sq;
	sq.setSquare(8);

	calculateArea(rec, sq);
	return 0;
}
