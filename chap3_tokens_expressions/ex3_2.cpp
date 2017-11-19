#include <iostream>
using namespace std;

int main(){
	int *arr;
	int size;

	cout << "Enter size of the array in bytes : ";
	cin >> size;

	arr = new int[size];
	cout << "Array of size " << size << "bytes created" << endl;

	delete arr;
	return 0;
}
