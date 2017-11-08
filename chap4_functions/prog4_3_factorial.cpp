# include <iostream>
using namespace std;

long fact(int n){

	if(n == 0){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}


int main(){

	int num;
	cout << "Enter a number ";
	cin >> num;
	cout << "Factorial of num " << num << " is " << fact(num) << "." << endl;
	return 0;
}
