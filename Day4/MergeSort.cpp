#include <iostream>
using namespace std;

void mergeSort(int[],int,int);
void merge(int[],int,int,int);

int main () {

	int arr[10]= {11, 9, 7, 22, 23, 44, 55, 78, 33, 88};
	int i;

	mergeSort(arr, 0, 9);
	cout << "After sorting the elements" << endl;
	for(i = 0; i < 10; i++) {
	cout << arr[i] << endl;
	}
}

void mergeSort(int arr[], int beg, int end) {

	int mid;
	if(beg < end) {
		mid = (beg + end) / 2;
		mergeSort(arr, beg, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, beg, mid, end);
	}
}

void merge(int arr[], int beg, int mid, int end) {

	int i = beg, j = mid+1, k, index = beg;
	int temp[10];
	while(i <= mid && j <= end) {
		if(arr[i] < arr[j]) {
			temp[index] = arr[i];
			i = i+1;
		}
		else {
			temp[index] = arr[j];
			j = j+1;
		}
		index++;
	}
	if(i > mid) {
		while(j <= end) {
			temp[index] = arr[j];
			index++;
			j++;
		}
	}
	else {
		while(i <= mid) {
			temp[index] = arr[i];
			index++;
			i++;
		}
	}
	k = beg;
	while(k < index) {
		arr[k] = temp[k];
		k++;
	}
}
