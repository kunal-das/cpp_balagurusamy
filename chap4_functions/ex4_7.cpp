# include <iostream>
# include <math.h>
using namespace std;

float power(float &, int);

int main(){
	float m;
	int n;

	cout << "Enter the base value : ";
	cin >> m;
	cout << "Enter the power : ";
	cin >> n;
	float result = power(m, n);
	cout << "Result : " << result << endl;

}

float power(float &m, int n=2){
	return pow(m, n);
}
