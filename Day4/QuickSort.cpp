#include <iostream>
using namespace std;

int partition(int [], int, int);
void quickSort(int [], int, int);

int main() {

	int i;
	int arr[10] = {44, 33, 11, 55, 77, 90, 40, 60, 22, 88};

	quickSort(arr, 0, 9);
	cout << "The sorted array is: " << endl;
	for(i = 0; i < 10; i++)
	cout << arr[i] << endl;
}

int partition(int arr[], int beg, int end) {

	int left, right, temp, loc, flag;
	loc = left = beg;
	right = end;
	flag = 0;

	while(flag != 1) {
		while((arr[loc] <= arr[right]) && (loc != right))
			right--;

			if(loc == right) {
				flag = 1;
			}
			else if(arr[loc] > arr[right]) {
				temp = arr[loc];
				arr[loc] = arr[right];
				arr[right] = temp;
				loc = right;
			}
			if(flag!=1) {
				while((arr[loc] >= arr[left]) && (loc != left))
					left++;
					if(loc == left) {
						flag =1;
					}
					else if(arr[loc] < arr[left]) {
						temp = arr[loc];
						arr[loc] = arr[left];
						arr[left] = temp;
						loc = left;
					}

			}
		}
		return loc;
}

void quickSort(int arr[], int beg, int end) {

	int loc;

	if(beg < end) {
		loc = partition(arr, beg, end);
		quickSort(arr, beg, loc-1);
		quickSort(arr, loc+1, end);
    }
}
