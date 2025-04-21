#include "Transaction.h" 
 
Transaction::Transaction() { 
    transactionID = 0; 
    bookID = 0; 
    borrowerID = 0; 
    date = ""; 
} 
 
Transaction::Transaction(int tid, int bid, int brid, string d) { 
    transactionID = tid; 
    bookID = bid; 
    borrowerID = brid; 
    date = d; 
} 
 
void Transaction::inputTransaction() { 
    cout << "Enter Transaction ID: "; 
    cin >> transactionID; 
    cout << "Enter Book ID: "; 
    cin >> bookID; 
    cout << "Enter Borrower ID: "; 
    cin >> borrowerID; 
    cin.ignore(); 
    cout << "Enter Date: "; 
    getline(cin, date); 
} 
 
void Transaction::displayTransaction() { 
    cout << "Transaction ID: " << transactionID << endl; 
    cout << "Book ID: " << bookID << endl; 
    cout << "Borrower ID: " << borrowerID << endl; 
    cout << "Date: " << date << endl; 
} 
 
int Transaction::getTransactionID() { 
    return transactionID; 
} 
 