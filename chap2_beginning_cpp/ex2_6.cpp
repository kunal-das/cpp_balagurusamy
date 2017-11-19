# include <iostream>
using namespace std;

class Temp{
	int faren, cel;
	public :
		void getdata();
		void displayCelsuis();
};

void Temp :: getdata(){
	cout << "Enter temperature in Farenheit : ";
	cin >> faren;
}

void Temp :: displayCelsuis(){
	cel = ((faren - 32)*5)/9;
	cout << "Celsius : " << cel << endl;
}

int main(){
	Temp t;
	t.getdata();
	t.displayCelsuis();

	return 0;
}
