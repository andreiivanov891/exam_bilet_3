#pragma once
#include <iostream>
#include "Book.h"
#include<string>
#include <vector>
#include <algorithm>
using std::string;

class Bookshelf
{
private:
	string tema;
	std::vector<Book> book;
public:
	Bookshelf();
	Bookshelf(const string& tema, std::vector<Book>& book);
	void show_book_of_autor();
	void show_book_of_pub_date(Book& b);
	void add_book(Book& b);
};

Bookshelf::Bookshelf() {
	this->book = book;
}

Bookshelf::Bookshelf(const string& tema, std::vector<Book>& book)
{
	this->tema = tema;
	this->book = book;
}
void Bookshelf::add_book(Book& b)
{
	book.push_back( b);
}
void Bookshelf::show_book_of_autor()
{
	std::sort(book.begin(), book.end());
	for (auto el : book) 
	{
		el.show_book();
		std::cout << std::endl;
	}
}

void Bookshelf::show_book_of_pub_date(Book&b) 
{
	int pub_date = 1920;
	if (b.get_pub_date() > pub_date)
	{
		b.show_book();
	}
	else
	{
		std::cout << "Слишком раний год издания, автор тогда не писал!(" << std::endl;
	}

}