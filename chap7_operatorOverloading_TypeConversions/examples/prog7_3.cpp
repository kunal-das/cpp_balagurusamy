#include <iostream>
using namespace std;

const int size = 3;
/*-----------Class Declaration--------------*/
class myvector{
	int *v = new int[size];
	public:
		myvector();
		myvector(int *);
		friend myvector operator*(int, myvector);
		friend myvector operator*(myvector, int);
		friend myvector operator*(myvector, myvector);
		friend istream & operator>>(istream &, myvector &);
		friend ostream & operator<<(ostream &, myvector &);
};
/*-----------Method Declaration--------------*/
myvector :: myvector(){
	for(int i=0;i<size;i++){
		v[i] = 0;
	}
}

myvector::myvector(int * p){
	v = p;
}

myvector operator*(int k, myvector v){
	myvector c;
	for(int i=0;i<size;i++){
		c.v[i] = v.v[i] * k;
	}
	return c;
}

myvector operator*(myvector v, int k){
	myvector c;
	for(int i=0;i<size;i++){
		c.v[i] = v.v[i] * k;
	}
	return c;
}

myvector operator*(myvector v1, myvector v2){
	myvector c;
	for(int i=0;i<size;i++){
		c.v[i] = v1.v[i] * v2.v[i];
	}
	return c;
}

istream & operator>>(istream & din, myvector & v){
	for(int i=0;i<size;i++){
		din >> v.v[i];
	}
	return din;
}

ostream & operator<<(ostream & dout, myvector & v){
	dout << "(" << v.v[0];
	for(int i=1;i<size;i++){
		dout << ", " << v.v[i];
	}
	dout << ")";
	return dout;
}
/*-----------Main Program--------------*/
int main(void){
	myvector x;
	myvector m = x;

	cout << "Enter elements for vector m\n";
	cin >> m;
	cout << "Elements of vector m : \n";
	cout << m;

	myvector a, b;
	a = m * 2;
	b = a * m;

	cout << "\n";
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}
