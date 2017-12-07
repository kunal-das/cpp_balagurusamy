# include <iostream>
# include <string.h>
using namespace std;

/*********Class Declaration*********/
class String{
	char *p;
	int len;
	public:
		String(){len=0;p=0;}
		String(const char * str);
		int operator==(String &s);
		friend ostream & operator<<(ostream &os, String &s);
		void show(void);
};

/*----------Method Declaration----------*/
String :: String(const char * str){
	len = strlen(str);
	p = new char[len+1];
	strcpy(p, str);
}

int String :: operator==(String &s){
	int l = strlen(s.p);
	if(this->len > l)
		return 1;
	else if(this->len < l)
		return -1;
	else{
		for(int i = 0; i < l; i++){
			if(this->p[i] > s.p[i])
				return 1;
			else
				return -1;
		}
		return 0;
	}
}

void String :: show(void){
	cout << this->p;
}

ostream & operator<<(ostream &os, String &s){
	os << s.p;
	return os;
}

/*----------Main Program----------*/
int main(void){
	String s1("Kunal");
	String s2("Das");
	cout << "Comparing " << s1 << " with " << s2 << " : " << (s1==s2) << endl;
}
