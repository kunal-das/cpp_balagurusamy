# include <iostream>
# include <cstring>
using namespace std;

/*--------------Class Declaration------------*/
class String{
	char *str;
	int len;
	public:
		String(){}
		String(char *str){
			len = strlen(str);
			this->str = new char[len+1];
			strcpy(this->str, str);
		}
		void display(void){
			cout << "String contents : " << str << endl;
		}
		void concat(String s){
			len += s.len;
			char * temp = new char[len+1];
			strcpy(temp, this->str);
			strcat(temp, s.str);
			str = temp;
			delete[] temp;
		}
		void create(char * str){
			this->str = str;
			this->len = strlen(str);
		}
};
/*--------------Main Program------------*/
int main(void){

	char * ch = new char[20];
	char * ch1 = new char[20];
	cout << "Enter a string : ";
	cin >> ch;
	String s1;
	s1.create(ch);
	cout << "Enter a string : ";
	cin >> ch1;
	String s2(ch1);
	s1.concat(s2);
	s1.display();
	return 0;
}
