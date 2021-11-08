#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Provide the number of times 'Hello world' should be printed " << endl;
	cin >> number;
	int i = 0;
	for (i; i < number; i++) {
		cout << "Hello world" << endl;

	}

	cout << endl;
	i = 0;
	while (i < number) {
		cout << "Hello world" << endl;
		i++;
	}
	cout << endl;
	i = 0;
	do {
		cout << "Hello world" << endl;
		i++;
	} while (i < number);
	return 0;
}

