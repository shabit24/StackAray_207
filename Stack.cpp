#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	int stack_array[5];
	int top;

public:
	//constructor
	StackArray() {
		top = -1;
	}


	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceeds the limit "<<endl;
			return 0;
		}
		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;
		return element;

	}
	void pop() {
		if (empty()) {
			cout << "\nStack is empty. cann't pop" << endl;
			return;
		}
		cout << "\nThe poped element is: " << stack_array[top] << endl;
		top--;
	}
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty" << endl;
		}
		else {
			for (int top = top; top >= 0; top--) {
				cout << stack_array[top] << endl;
			}
		}
	}


};


int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		cin >> ch;
		switch (ch) {
		case '1': {
			cout << "\nEnter element: ";
			int element;
			cin >> element;
			s.push(element);
			break;
		}
		case '2': if (s.empty()) {
			cout << "\nStack array is empty" << endl;
			break;
		}
				s.pop();
				break;
		case '3': 
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid choice" << endl;
			break;

		}
	}
}