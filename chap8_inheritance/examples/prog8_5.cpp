#include <iostream>
#include <string>
using namespace std;

/*----------Class Declaration--------*/
class student{
	protected:
		int roll_no;
	public:
		void get_number(int);
};

class test : public student{
	protected:
		float part1, part2;
	public:
		void get_marks(float x, float y);
		void put_marks(void);
};

class sports{
	protected:
		float score;
	public:
		void get_score(float s);
		void put_score(void);
};

class result : public test, public sports{
	float total;
	public:
		void display(void);
};

/*----------Method Declaration--------*/

void student :: get_number(int n){
	roll_no = n;
}

void test :: get_marks(float x, float y){
	part1 = x;
	part2 = y;
}

void test :: put_marks(void){
	cout << "Part 1 : " << part1 << endl
	     << "Part 2 : " << part2 << endl;
}

void sports :: get_score(float s){
	score = s;
}

void sports :: put_score(void){
	cout << "Sports : " << score << endl;
}

void result :: display(void){
	cout << "Roll Number : " << roll_no << endl
	     << "Subject 1 : " << part1 << endl
	     << "Subject 2 : " << part2 << endl
	     << "Score : " << score << endl
	     << "Score : " << score << endl
	     << "Total : " << part1 + part2 << endl;
}

/*----------Method Declaration--------*/
int main(void){

	result R1;
	R1.get_number(1234);
	R1.get_marks(27.5, 55.43);
	R1.get_score(18.98);
	R1.display();

	return 0;
}
