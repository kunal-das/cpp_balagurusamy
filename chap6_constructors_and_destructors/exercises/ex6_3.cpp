# include <iostream>
# include <vector>
using namespace std;

/*---------Class Declaration--------*/
class Book{
	const char *author;
	const char * title;
	float price;
	const char *publisher;
	int count;
	public:
		Book(){}
		Book(const char *, const char *, const char *, int, float);
		float get_price(int);
		const char * get_author(void);
		const char * get_title(void);
};

class BookShop{
	vector<Book> booklist;
	public:
		BookShop(){}
		BookShop(Book);
		Book *getBook(const char *, const char*);
};
/*---------Method Declaration--------*/
Book :: Book(const char * author, const char * title, const char * publisher, int copies, float price){
	this->author = author;
	this->title = title;
	this->publisher = publisher;
	count = copies;
	this->price = price;
}

const char * Book :: get_author(void){
	return this->author;
}
const char * Book :: get_title(void){
	return this->title;
}

BookShop :: BookShop(Book b){
	booklist.push_back(b);
}

float Book :: get_price(int count){
	if(this->count <= count){
		return(this->price * count);
	}
	cout << "Required copies not in stock" << endl;
	return -1;
}

Book * BookShop :: getBook(const char *author, const char *title){
	for(vector<Book>::iterator itr=booklist.begin();itr!=booklist.end();++itr){
		if(itr->get_author()==author && itr->get_title()==title){
			Book *b = &(*itr);
			return b;
		}
	}
	cout << "The requested is not available right now\n";
	return nullptr;
}
/*---------Main Program--------*/
int main(void){
	//TODO : test the classes

}
