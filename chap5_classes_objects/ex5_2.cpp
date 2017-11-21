# include <iostream>
using namespace std;

const int m = 10;
/*-----------Class Declaration------------*/
class MyVector{
	float * values;
	int elements;
	public:
		void createVector(int k);
		void modify(int a, int val);
		void scalarMultiply(int k);
		void display(void);
};

/*-----------Method Declaration------------*/
void MyVector :: createVector(int k){
	elements = k;
	values = new float[k];
	for(int i=0;i<k;i++){
		cout << "Enter value of " << i+1 << " element : ";
		cin >> values[i];
	}
}

void MyVector :: modify(int a, int val){
	if(a >= elements){
		cout << "Index specified is greater than the max capacity of the vector\n";
		exit(1);
	}
	else{
		values[a] = val;	
	}
}

void MyVector :: scalarMultiply(int k){
	for(int i=0;i<elements;i++){
		values[i] *= k;
	}
}

void MyVector :: display(void){
	for(int i=0;i<elements;i++){
		cout << values[i] << " ";
	}
	cout << endl;
}
/*-----------Main Program------------*/
int main(void){
	MyVector v;
	v.createVector(10);
	v.modify(5, 9999);
	v.scalarMultiply(2);
	v.display();
	v.modify(11, 43);
	return 0;
}
