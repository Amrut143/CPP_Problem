#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int random = (rand()%6 + 1);
	cout << "Random number between 1 to 6 is:: " << random << endl;

return 0;
}
