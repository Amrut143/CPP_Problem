#include <iostream>

using namespace std;

class ProductPrice {

	public:
	int goldPrice;
	int diamondPrice;

	ProductPrice(int goldPrice, int diamondPrice) {

		this -> goldPrice = goldPrice;
		this -> diamondPrice = diamondPrice;
	}

	void displayPrice() {

		cout << "\nPrice Of Gold Is: " << goldPrice << "\nPrice Of Diamond Is: " << diamondPrice << endl;
	}
};

class Gold {

	public:
	int goldPrice;

	Gold(ProductPrice& productPrice) {

		this -> goldPrice = productPrice.goldPrice;
	}

	Gold& operator = (const ProductPrice& product) {

		this -> goldPrice = (product.goldPrice * 20);
		return *this;
	}

	operator ProductPrice() {

		return ProductPrice(this -> goldPrice, 0);
	}

	void displayPrice() {

		cout << "\nPrice Of Gold Is: " << goldPrice << endl;
	}
};

int main() {

	ProductPrice productPrice(120, 390);
	productPrice.displayPrice();

	Gold gold = productPrice;
	gold.displayPrice();

	gold = productPrice;
	gold.displayPrice();

	productPrice = gold;
	productPrice.displayPrice();
}
