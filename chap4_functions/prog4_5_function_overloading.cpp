# include <iostream>
# define pi 3.14
using namespace std;

int area(int);
int area(int, int);
float area(float);

int main(){
	cout << "Area of a square of side 5 " << area(5) << endl;
	cout << "Area of a rectangle of sides 10 and 6 " << area(10, 6) << endl;
	cout << "Area of circle of radius 5 " << area(5.0f) << endl;
	return 0;
}


int area(int side){
	return(side*side);
}

int area(int a, int b){
	return(a*b);
}

float area(float r){
	return(pi*r*r);
}
