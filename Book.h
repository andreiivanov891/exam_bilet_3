#pragma once
#include <iostream>
#include <string>
using std::string;

class Book
{
private:
	string book_name;
	string autor_name;
	int publication_date;
	int number_of_pages;
public:
	Book() { book_name = "NoName"; autor_name = "Noname"; publication_date = 0; number_of_pages = 0; };
	Book(const string&, const string&, int, int);
	void set_book_name(const string& b_name) { book_name = b_name; }
	string get_book_name(const string& b_name) { return b_name; }
	int get_pub_date() {return publication_date;}
	void show_book();
	friend bool operator> (const Book& b1, const Book& b2);
	friend bool operator<= (const Book& b1, const Book& b2);

	friend bool operator< (const Book& b1, const Book& b2);
	friend bool operator>= (const Book& b1, const Book& b2);
	friend bool operator== (const Book& b1, const Book& b2);
};

Book::Book(const string& b_name, const string& a_name, int p_date, int num_pages)
{
	book_name = b_name;
	autor_name = a_name;
	publication_date = p_date;
	number_of_pages = num_pages;
}

void Book::show_book()
{
	std::cout << "Название книги: " << book_name << '\n';
	std::cout << "Имя автора: " << autor_name << '\n';
	std::cout << "Год выпуска: " << publication_date << '\n';
	std::cout << "Количество страниц: " << number_of_pages << '\n';
}

bool operator== (const Book& b1, const Book& b2)
{
	return (b1.autor_name == b2.autor_name);
}
bool operator> (const Book& b1, const Book& b2)
{
	return b1.autor_name > b2.autor_name;
}

bool operator>= (const Book& b1, const Book& b2)
{
	return b1.autor_name >= b2.autor_name;
}

bool operator< (const Book& b1, const Book& b2)
{
	return b1.autor_name < b2.autor_name;
}

bool operator<= (const Book& b1, const Book& b2)
{
	return b1.autor_name <= b2.autor_name;
}