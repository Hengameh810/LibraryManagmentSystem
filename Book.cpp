 #include "Book.h"
Book::Book() { 
    bookID = 0; 
    title = ""; 
    author = ""; 
    price = 0.0; 
} 
 
Book::Book(int id, string t, string a, float p) { 
    bookID = id; 
    title = t; 
    author = a; 
    price = p; 
} 
 
void Book::inputBook() { 
    cout << "Enter Book ID: "; 
    cin >> bookID; 
    cin.ignore(); 
    cout << "Enter Title: "; 
    getline(cin, title); 
    cout << "Enter Author: "; 
    getline(cin, author); 
    cout << "Enter Price: "; 
    cin >> price; 
} 
 
void Book::displayBook() { 
    cout << "Book ID: " << bookID << endl; 
    cout << "Title: " << title << endl; 
    cout << "Author: " << author << endl; 
    cout << "Price: " << price << endl; 
} 
 
int Book::getBookID() { 
    return bookID; 
} 
 