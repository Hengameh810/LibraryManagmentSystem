#include <iostream> 
#include "Book.h" 
#include "Borrower.h" 
#include "Transaction.h" 
using namespace std; 
 
int main() { 
    Book b; 
    Borrower br; 
    Transaction t; 
 
    cout << "Enter book info:" << endl; 
    b.inputBook(); 
 
    cout << "Enter borrower info:" << endl; 
    br.inputBorrower(); 
 
    cout << "Enter transaction info:" << endl; 
    t.inputTransaction(); 
 
    cout << endl; 
    b.displayBook(); 
    cout << endl; 
    br.displayBorrower(); 
    cout << endl; 
    t.displayTransaction(); 
 
    return 0; 
} 
 