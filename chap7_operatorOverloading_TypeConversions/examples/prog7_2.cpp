# include <iostream>

using namespace std;

/*-------------Class Declaration------------*/
class Complex{
	float x, y;
	public:
		Complex(void);
		Complex(float x, float y);
		Complex operator+(Complex c);
		void display(void);
};
/*-------------Method Declaration------------*/
Complex :: Complex(void){
	this->x = 0;
	this->y = 0;
}
Complex :: Complex(float x, float y){
	this->x = x;
	this->y = y;
}
Complex Complex :: operator+(Complex c){
	Complex d;
	d.x = this->x + c.x;
	d.y = this->y + c.y;

	return d;
}

void Complex :: display(void){
	printf("Complex arguments:\nReal : %-4.2f, Imaginary : %-4.2f\n", x, y);
}

/*-------------Main Program------------*/
int main(void){
	Complex a(10, 20);
	Complex b(30, 40);
	Complex c = a + b;
	a.display();
	b.display();
	c.display();
	return 0;
}
