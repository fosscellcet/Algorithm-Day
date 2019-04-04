// fromt, back, dips, enq, dq

#include<iostream>

usinf namespace std;

template<typename t>
class queue {
public:
	t arr[20];
	int front, back;
	queue() {
		front = -1;
		back = -1;
	}

	void push(t x) {
		arr[++top] = x;
	}

	t pop() {
		return arr[top--];
	}

	t top() {
		return arr[top];
	}

	void display() {
		for (int i = top; i >= 0; --i) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

int main() {

	queue<int> stk;
	stk.push(10);
	stk.push(20);
	stk.pusk(30);
	cout << "queue now: ";
	stk.display();
	cout << "Popping last element: " << stk.pop() << endl;
	cout << "Top element: " << stk.top() << endl;

	return 0;
}