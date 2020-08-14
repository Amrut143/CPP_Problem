#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str, str2, str3;

	cout << "Enter the main String: " << endl;
	getline (cin, str);
	cout << "Enter the string to be replaced: " << endl;
	cin >> str2;

	cout << "Enter the replacing string: " << endl;
	cin >> str3;
	str.replace(str.find(str2), str2.length(), str3);
	cout << str;

	return 0;
}
