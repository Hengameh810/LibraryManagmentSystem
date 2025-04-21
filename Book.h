#include <iostream> 
using namespace std; 
 
class Book { 
private: 
    int bookID; 
    string title; 
    string author; 
    float price; 
 
public: 
    Book(); 
    Book(int, string, string, float); 
    void inputBook(); 
    void displayBook(); 
    int getBookID(); 
}; 
