#include <iostream>
#include <ctime>
using namespace std;

void insertionSort(int [], int);

int main() {

	int arr[] = {34, 45, 11, 89, 55, 19, 22, 8, 40};

	insertionSort(arr, 9);
	cout << "After sorting the elements: " << endl;
	for(int i = 0; i<=8; i++)
		cout << arr[i] << endl;
}

void insertionSort(int arr[], int numOfElements) {

	int i, j, temp;

	for(i = 1; i < numOfElements; i++) {
			temp = arr[i];
			for(j = i - 1; j >= 0 && temp < arr[j]; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
	}
}
