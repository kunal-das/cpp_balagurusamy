#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class shape{
	protected:
		float side1;
		float side2;
	public:
		void get_data(float x, float y){
			side1 = x;
			side2 = y;
		}

		void virtual display_area(void){
			float area = 0;
			cout << "Area = " << area << endl;
		}
};

class triangle : public shape{
	public:
		void display_area(void){
			float area = 0.5 * side1 * side2;
			cout << "Area = " << area << endl;
		}
};

class rectangle : public shape{
	public:
		void display_area(void){
			float area = side1 * side2;
			cout << "Area = " << area << endl;
		}
};

/*----------Method Declaration--------*/
int main(void){
	//TODO
	return 0;
}
