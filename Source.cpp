#include <iostream>
#include <string>
using namespace std;


class queue {
private:
	int data;
	int head;
	int tail;
	int size;
	int arr[];

public:
	queue() {
		head = -1;
		tail = -1;
	}
	bool isempty() {
		if (head == tail) {
			cout << "empty queue" << endl;
			return true;
		}
		return false;
	}
	bool isfull() {
		if (head == 0 && tail ==size-1) {
			cout << "full" << endl;
			return true;
		}
		return false;
	}
	void enqueue(int x) {
		if (head == -1) {
			head = 0;
		}
		tail = (tail + 1) % size;
		arr[tail] = x;

	}

	int dequeue() {

	}
};

int main() {



	system("pause");
	return 0;
}