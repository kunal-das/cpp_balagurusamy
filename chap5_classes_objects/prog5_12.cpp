# include <iostream>
using namespace std;

/*----------Class Declaration============*/
class M{
	int x;
	int y;
	public:
		friend int sum(M &);
		void set_xy(int, int);
};

/*----------Method Declaration============*/
void M :: set_xy(int a, int b){
	x = a;
	y = b;
}

int sum(M & m){
	int M::* px = &M::x;
	int M::* py = &M::y;
	M * pm = &m;
	int sum = m.*px + pm->*py;
	return sum;
}

/*----------Main Program============*/
int main(void){
	M m;
	m.set_xy(3, 4);
	cout << "Sum of data memebers : " << sum(m) << endl;
	return 0;
}
