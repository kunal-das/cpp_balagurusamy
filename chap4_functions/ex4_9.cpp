# include <iostream>
# include <iomanip>
# include <math.h>
# define pi 3.14
using namespace std;

// Method declaration to compute the area of the circle
float area(float &);

// Method declaration to compute the area of a triangle
float area(float &, float &);

int main(void){

	float radius = 5.4, height = 10.4, base = 6.4, ar = 0.0;
	ar = area(radius);
	cout << "Area of circle is " << ar << endl;
	ar = area(base, height);
	cout << "Area of triangle is " << ar << endl;
	return 0;
}

//Method definition to compute the area of a circle
float area(float &radius){
	
	return (pi * pow(radius, 2));
}

//Method definition to compute the area of a triangle
float area(float &base, float &height){
	return (0.5*base*height);
}

