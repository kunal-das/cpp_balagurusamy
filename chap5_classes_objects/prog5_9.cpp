# include <iostream>
using namespace std;

class ABC; // Forward class declaration

/*=========Declaration of class XYZ==========*/
class XYZ{
	int data;
	public:
		void setValue(int value){
			data = value;
		}
		friend void add(XYZ, ABC);
};

/*=========Declaration of class ABC==========*/
class ABC{
	int data;
	public:
		void setValue(int value){
			data = value;
		}
		friend void add(XYZ, ABC);
};

/*=========Declaration of Methods==========*/
void add(XYZ x, ABC a){
	cout << "Sum of data values is :" << x.data + a.data << endl;
}

/*=============Main Program============*/
int main(void){
	ABC a;
	XYZ x;
	a.setValue(30);
	x.setValue(50);
	add(x, a);
	return 0;
}


