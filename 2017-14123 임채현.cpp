#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return (a > b);
}

void main() {

	vector<int> vec;
	int num;
	while (cin >> num) {
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end(), compare);

	cout << endl;
	cout << "ordered array" << endl;

	for (auto it = vec.begin(); it < vec.end(); it++) {
		cout << *it << " ";
	}
		cout << endl;

	system("pause");
}