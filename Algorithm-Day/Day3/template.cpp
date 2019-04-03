#include<iostream>

using namespace std;

template<typename T>
class temp {
public:
	T arr[100];
	int s;

	temp() {
		s = 0;
	}

	void insert(T x) {
		arr[s++] = x;
	}

	void size() {
		return s;
	}

	void delete() {
		s--;
	}

	void display() {
		for (int i = 0; i < s; ++i)
		{
			cout << arr[i] << " ";
		}
		 cout << endl << endl;
	}

}

int main() {
	
	temp<int> array;

	array.insert(10);
	array.insert(40);
	array.insert(30);
	array.insert(20);
	cout << "Contents of the array: "
	array.display();
	cout << "Size of the array: " << array << endl;

	return 0;
}