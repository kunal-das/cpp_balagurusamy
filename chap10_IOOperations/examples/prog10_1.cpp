#include <iostream>
using namespace std;

/*----------Method Declaration--------*/
int main(void){

	int count = 0;
	char c;

	cout << "INPUT TEXT\n";
	cin.get(c);

	while(c != '\n'){
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout << "\nThe number of characters in the text is : " << count  << endl;
	return 0;
}
