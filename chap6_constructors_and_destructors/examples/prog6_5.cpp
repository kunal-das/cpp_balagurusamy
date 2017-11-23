# include <iostream>
# include <cstring>
using namespace std;

/*--------Class Declaration---------*/
class String{
	int len;
	char *s;
	public:
		String(){
			len = 0;
			s = new char[len+1];
		}
		String(const char *s){
			len = strlen(s);
			s = new char[len + 1];
			strcpy(this->s, s);	
		}
		void display(void){
			cout << "Name : " << s << endl;
		}
		void join(String &);
};
/*--------Method Declaration---------*/
void String :: join(String &str){
	//cout << "Previous len : " << this->len << endl;
	this->len += strlen(str.s);
	//cout << "New len : " << this->len << endl;
	char * temp = new char[len+1];
	strcpy(temp, this->s);	
	//cout << "Temp before append : " << temp << endl;
	strcat(temp, str.s);	
	//cout << "Temp after append : " << temp << endl;
	this->s = temp;
}
/*--------Main Program---------*/
int main(void){
	char name1[] = "Kun";
	char name2[] = "al";
	const char *s = name1;
	const char *v = name2;
	String s1(s), s2(v);
	s1.join(s2);
	s1.display();
	return 0;
}
