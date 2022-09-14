// 14.09.2022 - exam OOP
//Margiev S. 
#include <iostream>
#include "Bookshelf.h"
using std::cout;
using std::endl;

int main()
{
    setlocale(0, "");
    Book b1("Sin Sity", "Frank Miller", 1989, 200);

    Book b4("Sin Sity", "Arank Miller", 1919, 200);
    Bookshelf books;
    books.add_book(b1);
    books.add_book(b4);
    books.show_book_of_autor();
    books.show_book_of_pub_date(b4);

    
}

