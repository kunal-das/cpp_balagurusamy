# include <iostream>
using namespace std;

/*-------------Class Declaration-----------*/
class Point{
	int x, y;
	public:
		Point(int, int);
		void display(void);
};
/*-------------Method Declaration-----------*/
Point :: Point(int a, int b){
	x = a;
	y = b;
}
void Point :: display(void){
	cout << "(" << x << ", " << y << ")\n";
}
/*-------------Main Program-----------*/
int main(void){
	Point x(1, 2);
	x.display();
	return 0;
}
