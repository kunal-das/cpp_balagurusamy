# include <iostream>

using namespace std;

/*-------------------Class Declaration----------------*/
class class_2;
class class_1{
	int value1;
	public:
		void indata(int a){
			value1 = a;
		}
		void display(void){
			cout << "value : " << value1 << endl;
		}
		friend void exchange(class_1 &, class_2 &);
};

class class_2{
	int value2;
	public:
		void indata(int b){
			value2 = b;
		}
		void display(void){
			cout << "Value : " << value2 << endl;
		}
		friend void exchange(class_1 &, class_2 &);
};

/*----------------Method Declaration---------------*/
void exchange(class_1 & a, class_2 & b){
	int temp = a.value1;
	a.value1 = b.value2;
	b.value2 = temp;
}

/*---------------Main Program----------------*/
int main(void){
	class_1 x;
	class_2 y;
	x.indata(19);
	y.indata(59);
	cout << "X : ";  
	x.display();
	cout << "Y : "; 
	y.display();
	exchange(x, y);
	cout << "X : ";  
	x.display();
	cout << "Y : "; 
	y.display();
	return 0;
}
