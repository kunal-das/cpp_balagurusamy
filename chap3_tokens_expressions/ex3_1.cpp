# include <iostream>
using namespace std;

int m = 10;

int main(){
	int m  = 20;

	{	// declaring anonymous inner block
		int m = 30;
		int k = 30;
		cout << "Inside inner block";
		cout << "k = " << k << endl;
		cout << "m = " << m << endl;
		cout << "::m = " << ::m << endl; // accessing m = 10
	}
	cout << "Inside main block";
	cout << "m = " << m << endl;
	cout << "::m = " << ::m << endl;
	return 0;
}
