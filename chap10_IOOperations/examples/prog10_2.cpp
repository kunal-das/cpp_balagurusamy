#include <iostream>
#include <string>
using namespace std;

int main(void){

	int size = 20;
	char c[size];
	cout << "Enter your city name : ";
	cin.getline(c, size);
	cout << "City Name : " << c << endl;
	return 0;
}
