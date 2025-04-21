#include <iostream> 
using namespace std; 
 
class Transaction { 
private: 
    int transactionID; 
    int bookID; 
    int borrowerID; 
    string date; 
 
public: 
    Transaction(); 
    Transaction(int, int, int, string); 
    void inputTransaction(); 
    void displayTransaction(); 
    int getTransactionID(); 
}; 
