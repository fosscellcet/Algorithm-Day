#include <bits/stdc++.h>

using namespace std;

template <typename T>
void printVector(vector<T> v) {
	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << " ";
	}

	cout << endl << endl;
}

int main()
{
	vector<int> intv;
	intv.push_back(10);
	intv.push_back(20);
	intv.push_back(30);
	intv.push_back(40);
	intv.push_back(50);
	intv.push_back(90);
	intv.push_back(80);
	intv.push_back(70);
	intv.push_back(60);
	cout << "Integer Vector: " << endl;
	printVector<int>(intv);
	sort(intv.begin(), intv.end());
	cout << "Sorted" << endl;
	printVector<int>(intv);
	intv.pop_back();
	intv.pop_back();
	intv.pop_back();
	intv.pop_back();
	cout << "After popping 4 elements: " << endl;
	printVector<int>(intv);
	return 0;
}