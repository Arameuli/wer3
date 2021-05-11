#include <iostream>
using namespace std;
int main()
{
	int *n[5];
	int c[5];
	for (int i = 0; i < 5; i++) {
		n[i] = &c[i];
		cin >> *n[i];
	}
	cout << endl << "-------------------" << endl;
	for (int i = 0; i < 5; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
}

