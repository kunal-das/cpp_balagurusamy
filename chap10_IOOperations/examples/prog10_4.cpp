#include <iostream>
using namespace std;

/*----------Method Declaration--------*/
int main(void){

	int item[4] = {10, 8, 12, 15};
	int cost[4] = {75, 100, 60, 99};
	cout.width(5);
	cout  << "ITEMS : ";
	cout.width(8);
	cout  << "COST";

	cout.width(15);
	cout << "TOTAL VALUE" << endl;
	int sum = 0;

	for(int i = 0;i<4;i++){
		cout.width(5);
		cout << item[i];

		cout.width(8);
		cout << cost[i];

		int value = item[i] * cost[i];
		cout.width(15);
		cout << value << endl;
		sum += value;
	}
	cout << "\n Grand Total = ";
	cout.width(2);
	cout << sum << endl;
	
	return 0;
}
