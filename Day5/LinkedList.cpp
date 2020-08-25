#include <iostream>
using namespace std;
/**
 * Creating linkedlist using pointer
 */

struct Node {

	int data;
	struct Node *next;
};

struct Node *head = NULL;

void addData(int newData) {

	struct Node *newNode = new Node;
	newNode -> data = newData;
	newNode -> next = head;
	head = newNode;
}

void printList() {

	struct Node *ptr;
	ptr = head;

	while(ptr != NULL) {
		cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
}

int main() {

	int i = 0, numOfNodes, value;

	cout << "Enter the no of nodes: " << endl;
	cin >> numOfNodes;

	while(i < numOfNodes) {

		cout << "Enter value of node: " << endl;
		cin >> value;
		addData(value);
		i++;
	}
	cout << "The linked list is: ";
	printList();
	return 0;
}

