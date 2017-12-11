#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class shape{
	protected:
		float side1;
		float side2;
	public:
		void get_data(float x, float y = 0){
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
};

class circle : public shape{
	public:
		void display_area(void){
			float area = 3.14 * side1 * side1;
			cout << "Area = " << area << endl;
		}
};

/*----------Method Declaration--------*/
int main(void){
	shape * s1 = new triangle;
	shape * s2 = new rectangle;
	shape * s3 = new circle;

	s1->get_data(5, 4);
	s2->get_data(5, 4);
	s3->get_data(5);

	s1->display_area();
	s2->display_area();
	s3->display_area();

	return 0;
}
