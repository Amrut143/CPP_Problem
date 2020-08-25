#include <bits/stdc++.h>
#include <iostream>
#include <list>
using namespace std;

struct Hash
{
	int hashTableSize;
	list<int> *table;

	public:
	Hash(int size);

	void insertItem(int element);

	int hashFunction(int value) {
		return (value % hashTableSize);
	}

	void displayHash();

	void search(int element);
};

Hash::Hash(int size) {

	this -> hashTableSize = size;
	table = new list<int>[hashTableSize];
}

void Hash::insertItem(int element) {

	int index = hashFunction(element);
	table[index].push_back(element);
}

void Hash::displayHash() {

	for (int i = 0; i < hashTableSize; i++) {
		cout << i;
		for (auto x : table[i]) {
			cout << "---->" << x;
		cout << endl;
		}
	}
}

void Hash::search(int element) {

		int index = hashFunction(element);
		int j = 0;
		list<int> :: iterator itr;

		for(itr = table[index].begin(); itr != table[index].end(); itr++) {
			j++;

			if(*itr == element) {
				cout << "Element is found at index : " << index << ":" << j << endl;
				break;
			}
		}

		if(itr != table[index].end()) {
			table[index].erase(itr);
		}
		else {
			cout << "Element not found" << endl;
		}
}

int main() {

	Hash hash(11);
	int option;

	do {

		cout << "\nSelect your option: \n1.Insert\n2.Search\n3.Display\n.Exit " << endl;
		cin >> option;

		switch(option) {

			case 1:
			{
				cout << "Enter Size Of Array: " << endl;
				int size;
				cin >> size;

				int arr[size];
				cout << "Enter Array Elements: " << endl;
				for (int j = 0; j < size; ++j) {
        			cin >> arr[j];
				}

  				for (int i = 0; i < size; i++) {
					hash.insertItem(arr[i]);
				}
				break;
			}

			case 2:
			{
				cout << "Enter Element To search: " << endl;
				int searchElement;
				cin >> searchElement;

				hash.search(searchElement);
				break;
			}

			case 3:
				hash.displayHash();
				break;

			case 4:
			break;
		}
	}while(option != 4);
	return 0;
}
