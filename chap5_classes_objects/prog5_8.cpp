# include <iostream>

using namespace std;

class sample{
	int a, b;
	public:
		friend float mean(sample);
		void setvalue(void){
			a = 10;
			b = 20;
		}
};

float mean(sample s){
	return (s.a+s.b)/2;
}

int main(void){
	sample s;
	s.setvalue();
	cout << "Mean value of the object is : " << mean(s) << endl;
	return 0;
}
