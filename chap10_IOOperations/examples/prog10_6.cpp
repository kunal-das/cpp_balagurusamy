#include <iostream>
#include <string>
using namespace std;

/*----------Method Declaration--------*/
int main(void){

	cout.fill('<');
	cout.precision(3);
	for(int i=0;i<=6;i++){
		cout.width(5);
		cout << endl;
		cout.width(10);
		cout << 1.0/float(i)  << endl;
		if(i==3){
			cout.fill('>');
		}
		cout << "\nPadding changed\n";
		cout.fill('#');
		cout.width(15);
		cout << 12.345646  << endl;
	}
	return 0;
}
