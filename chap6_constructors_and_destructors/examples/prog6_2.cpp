# include <iostream>
using namespace std;

/*------------Class Declaration---------*/
class complex{
	float x, y;
	public:
	complex(){}
	complex(float a){
		x = y = a;
	}
	complex(float a, float b){
		x = a;
		y = b;
	}
	friend complex sum(complex, complex);
	friend void show(complex);
};
/*------------Method Declaration---------*/
complex sum(complex a, complex b){
	complex c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

void show(complex c){
	cout << "Real : " << c.x << endl;
	cout << "Imaginary : " << c.y << endl;
}
/*------------Main Program---------*/
int main(void){
	complex a, b, c;
	a = complex(4);
	b=complex(5, 6);
	c = sum(a, b);
	show(c);
}
