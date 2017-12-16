#include <iostream>
#include <cmath>
using namespace std;

/*----------Method Declaration--------*/
int main(void){

	cout.fill('*');
	cout.setf(ios::left, ios::adjustfield);
	cout.width(10);
	cout << "VALUE";

	cout.setf(ios::right, ios::adjustfield);
	cout.width(15);
	cout << "SQRT OF VALUE" << endl;

	cout.fill('.');
	cout.precision(4);
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout.setf(ios::fixed, ios::floatfield);
	for(int i =0;i<=10;i++){
		cout.setf(ios::internal, ios::adjustfield);
		cout.width(5);
		cout << i;

		cout.setf(ios::right, ios::adjustfield);
		cout.width(20);
		cout << sqrt(i) << endl;
	}
	cout.setf(ios::scientific, ios::floatfield);
	cout << "\nSQRT(100) = " << sqrt(100) << endl;
	return 0;
}
