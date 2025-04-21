#include "Borrower.h" 
 
Borrower::Borrower() { 
    borrowerID = 0; 
    name = ""; 
    email = ""; 
} 
 
Borrower::Borrower(int id, string n, string e) { 
    borrowerID = id; 
    name = n; 
    email = e; 
} 
 
void Borrower::inputBorrower() { 
    cout << "Enter Borrower ID: "; 
    cin >> borrowerID; 
    cin.ignore(); 
    cout << "Enter Name: "; 
    getline(cin, name); 
    cout << "Enter Email: "; 
    getline(cin, email); 
} 
 
void Borrower::displayBorrower() { 
    cout << "Borrower ID: " << borrowerID << endl; 
    cout << "Name: " << name << endl; 
    cout << "Email: " << email << endl; 
} 
 
int Borrower::getBorrowerID() { 
    return borrowerID; 
} 
 
