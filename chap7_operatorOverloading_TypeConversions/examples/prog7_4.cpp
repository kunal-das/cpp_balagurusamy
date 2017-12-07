# include <iostream>
# include <string.h>
//using namespace std;

/*-----------Class Declaration----------*/
class string{
	char *p;
	int len;
	public:
		string(){p=0;len=0;}
		string(const char * p);
		string(const string &p);
		~string(){delete p;}
		//overloading + operator
		friend string operator+(const string &s1, const string &s2);
		//overloading <= operator
		friend int operator<=(const string &s1, const string &s2);
		friend void show(const string &);
};

/*-----------Method Declaration----------*/
string :: string(const char * p){
	len = strlen(p);
	this->p = new char[len+1];
	strcpy(this->p, p);
}

string :: string(const string &p){
	len = p.len;
	this->p = new char[len+1];
	strcpy(this->p, p.p);
}

string operator+(const string &s1, const string &s2){
	string s3;
	s3.len = strlen(s1.p) + strlen(s2.p);
	s3.p = new char[s3.len + 1];
	strcpy(s3.p, s1.p);
	strcat(s3.p, s2.p);
	return s3;
}

int operator<=(const string &s1, const string &s2){
	int m = strlen(s1.p);
	int n = strlen(s2.p);
	if (m <= n)
		return 1;
	else
		return 0;
}

void show(const string &s){
	std :: cout << s.p << std::endl;
}
/*-----------Main Program----------*/
int main(void){
	string s1 = "New";
	string s2 = "York";
	string s3 = "Delhi";
	string string3 = s1 + s2;

	if(s1 <= s3){
		show(s1);
		std::cout << "is less than \n";
		show(s3);
	}
	else{
		show(s3);
		std::cout << "is less than \n";
		show(s1);

	}
	return 0;
}
