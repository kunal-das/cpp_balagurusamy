# include <iostream>
# include <math.h>
using namespace std;

float power(float &, int);
float power(int &, int);

int main(){
	float m;
	int n;

	cout << "Enter the base value : ";
	cin >> m;
	cout << "Enter the power : ";
	cin >> n;
	float result = power(m, n);
	cout << "\nResult : " << result << endl;

}

float power(float &m, int n=2){
	cout << "Base is of type float" << endl;
	return pow(m, n);
}

float power(int &m, int n=2){
	cout << "Base is of type int" << endl;
	return pow(m, n);
}
