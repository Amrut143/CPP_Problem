#include <iostream>
using namespace std;

int main() {

	int arr[20], numOfElements, searchedElement, i, flag = 0;
	cout << "Enter the number of elements" << endl;
	cin >> numOfElements;

	cout << "Enter elements of the array" << endl;

	for(i = 0; i < numOfElements; ++i)
		cin >> arr[i];

	cout << "Enter element to search:";
	cin >> searchedElement;

	for(i = 0; i < numOfElements; ++i) {
		if(arr[i] == searchedElement) {
			flag = 1;
			break;
		}
	}
	if(flag) {
		cout << "Element is found at position: " << i+1 << endl;
	}
	else {
		cout<<"Element not found";
	}
	return 0;
}
