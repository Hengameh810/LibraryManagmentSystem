#include <iostream> 
using namespace std; 
 
class Borrower { 
private: 
    int borrowerID; 
    string name; 
    string email; 
 
public: 
    Borrower(); 
    Borrower(int, string, string); 
    void inputBorrower(); 
    void displayBorrower(); 
    int getBorrowerID(); 
}; 
 