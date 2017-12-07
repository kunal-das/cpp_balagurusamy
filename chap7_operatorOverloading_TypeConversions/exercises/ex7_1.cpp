# include <iostream>
using namespace std;

/*---------Class Declaration-----------*/
class Float{
	float x;
	public:
		Float(){x = 0;}
		Float(Float &);
		Float(float);
		Float operator+(Float &);
		Float operator-(Float &);
		Float operator*(Float &);
		Float * operator*(float);
		Float operator/(Float &);
		void show(void);
};
/*---------Method Declaration-----------*/
Float :: Float(Float & f){
	this->x = f.x;
}

Float :: Float(float x){
	this->x = x;
}

Float Float :: operator+(Float &f){
	Float x;
	x.x = this->x + f.x;
	return x;
}

Float Float :: operator-(Float &f){
	Float x;
	x.x = this->x - f.x;
	return x;
}

Float Float :: operator*(Float &f){
	Float x;
	x.x = this->x * f.x;
	return x;
}

Float * Float :: operator*(float f){
	static Float x;
	x.x = this->x * f;
	return &x;
}

Float Float :: operator/(Float &f){
	Float x;
	x.x = this->x / f.x;
	return x;
}

void Float :: show(void){
	cout << this->x << endl;
}

/*---------Main Program-----------*/
int main(void){
	Float f1(24.3);
	Float f2(56.3);
	Float f3, f4, f5, f6;

	f3 = f1 + f2;
	f4 = f1 - f2;
	f5 = f1 * f2;
	f6 = f1 / f2;

	f3.show();
	f4.show();
	f5.show();
	f6.show();

	return 0;
}
