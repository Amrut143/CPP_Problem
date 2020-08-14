#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int flip = rand() % 2;

	if ( flip == 1 )
		cout << "HEAD" << endl;
	else
		cout << "TAILS" << endl;
}
