#include <iostream>
using namespace std;

int binarySearch(int arr[], int beg, int end, int num) {

	if (beg <= end) {
		int mid = (beg + end)/2;

		if(arr[mid] == num) {
			return mid;
		}
		else if(arr[mid] < num) {
			return binarySearch(arr, mid+1, end, num);
		}
		else {
			return binarySearch(arr, beg, mid-1, num);
		}
   }
	return -1;
}

int main() {

	int arr[10] = {1, 3, 7, 15, 20, 25, 33, 36, 40};
	int num = 33;
	int index = binarySearch(arr, 0, 8, num);

	if(index == -1) {
		cout<< num <<" is not present in the array";
	}
	else {
		cout<< num <<" is present at index "<< index <<" in the array";
	}
	return 0;
}
