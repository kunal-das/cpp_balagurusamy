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
		friend MyVector addVector(MyVector, MyVector);
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
MyVector addVector(MyVector v1, MyVector v2){
	MyVector v3;
	v3.createVector(5);
	for(int i=0;i<v3.elements;i++){
		v3.values[i] = v1.values[i] + v2.values[i];
	}
	return v3;
}
/*-----------Main Program------------*/
int main(void){
	MyVector v1, v2;
	v1.createVector(10);
	v2.createVector(10);
	v1.modify(5, 9999);
	v2.modify(3, 134);
	v1.scalarMultiply(2);
	v2.scalarMultiply(3);
	MyVector v3 = addVector(v1, v2);
	v3.display();
	return 0;
}
