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
	static int success;
	static int fail;
	public:
		BookShop(){}
		BookShop(Book);
		Book *getBook(const char *, const char*);
		void transaction(const char *, const char *, int);
};
/*---------Static Variables Initialization--------*/
int BookShop :: success = 0;
int BookShop :: fail = 0;
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

void BookShop :: transaction(const char * author, const char * title, int copies){
	Book * book = getBook(author, title);
	if(book==nullptr){
		cout << "Book isn't available\n'"
		fail++;
		exit(1);
	}
	float price = book->get_price(copies);
	if(price != -1){
		cout << "Transaction successfull\n";
		success++;
	}
	else{
		cout << "Transaction failed\n";
		fail++;
		exit(1);
	}

}
/*---------Main Program--------*/
int main(void){
	//TODO : test the classes

}
