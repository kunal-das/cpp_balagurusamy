#include <iostream>
#include <cmath>
using namespace std;

/*----------Method Declaration--------*/
int main(void){

	cout << "Precision set to 3 digits\n\n";
	cout.precision(3);
	cout.width(10);
	cout << "SQRT of VALUE" << endl;

	for(int i=0;i<=5;i++){
		cout<< endl;
		cout.width(13);
		cout << sqrt(i) << endl;
	}
	cout << "\nPrecision set to 5 digits \n\n";
	cout.precision(5);
	cout << "sqrt(10) " << sqrt(10) << "\n\n";
	cout.precision(0); // default precision
	cout << "sqrt(10) " << sqrt(10) << "\n\n";
	return 0;
}
