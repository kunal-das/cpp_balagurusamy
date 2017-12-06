# include <iostream>
using namespace std;

/*********Class Declaration*************/
class Space{
	int x, y, z;
	public:
		Space(int, int, int);
		void getdata(int x, int y, int z);
		void display(void);
		void operator-();
};

/***********Method Declaration***********/
Space :: Space(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void Space :: getdata(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void Space :: display(void){
	printf("x co-ordinate : %d\n", x);
	printf("y co-ordinate : %d\n", y);
	printf("z co-ordinate : %d\n", z);
}

void Space :: operator-(void){
	this->x = -this->x;
	this->y = -this->y;
	this->z = -this->z;
}
/***********Main Program***********/
int main(void){
	Space s(10, 20, 30);
	-s;
	s.display();
	return 0;
}
