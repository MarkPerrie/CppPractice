#include <iostream>
#include <cstring>

using namespace std;

void printBook(struct books book);

struct books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_ID;
};

int main()
{
	struct books book1;
	struct books book2;
	struct books book3;

	strcpy(book1.title, "Catch22");
	strcpy(book1.author, "Joseph Heller");
	strcpy(book1.subject, "Bomber Pilots Don't Want To Die");
	book1.book_ID = 001;

	strcpy(book2.title, "Citizen Emperor");
	strcpy(book2.author, "Philip Dwyer");
	strcpy(book2.subject, "Napolean in Power");
	book2.book_ID = 002;

	cout << "What is Book 3's Title?";
	cin >> book3.title;
	cout << endl;

	cout << "What is Book 3's author?";
	cin >> book3.author;
	cout << endl;

	cout << "What is Book 3's subject?";
	cin >> book3.subject;
	cout << endl;

	cout << "What is Book 3's ID?";
	cin >> book3.book_ID;
	cout << endl;

	printBook(book1);
	printBook(book2);
	printBook(book3);

	return 0;
}

void printBook( struct books book ) 
{
   cout << "Book title : " << book.title <<endl;
   cout << "Book author : " << book.author <<endl;
   cout << "Book subject : " << book.subject <<endl;
   cout << "Book id : " << book.book_ID <<endl;
}