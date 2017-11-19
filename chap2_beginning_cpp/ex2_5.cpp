# include <iostream>
using namespace std;

int main(){
	int faren, cel;

	cout << "Enter temperature in Farenheit : ";
	cin >> faren;

	cel = ((faren - 32) * 5 ) /9;

	cout << "Celsius : " << cel << endl;

	return 0;
}
