#include <iostream>
using namespace std;

/*----------Class Declaration--------*/
class student{
	protected:
		int roll_no;
	public:
		void get_rollno(int n){
			roll_no = n;
		}
		void put_rollno(void){
			cout << "Roll No : " << roll_no << endl;
		}
};

class test : public virtual student{
	protected:
		float part1, part2;
	public:
		void get_marks(float m1, float m2){
			part1 = m1;
			part2 = m2;
		}
		void put_marks(void){
			cout << "Subject 1 : " << part1 << endl
			     << "Subject 2 : " << part2 << endl;
		}
};

class sports : public virtual student{
	protected:
		float score;
	public:
		void get_score(float m){
			score = m;
		}
		void put_score(void){
			cout << "Score : " << score << endl;
		}
};

class result : public test, public sports{
	protected:
		float total;
	public:
		void get_total(float m){
			total = m;
		}
		void display(void){
			cout << "Total : " << total << endl;
			total = part1 + part2 + score;
			put_rollno();
			put_marks();
			put_score();
		}
};

/*----------Method Declaration--------*/
int main(void){
	result r1;
	r1.get_rollno(3);
	r1.get_marks(40.87, 75.43);
	r1.get_score(43.2);
	r1.display();
	return 0;
}
