#ifndef ACCOUNT_H
#define ACCOUNT_H


#include <iostream>

using namespace std;

class Account {
    private:
    
        double Account_Balance_m;

    public:
        
        Account ();
        Account(double Account_Balance);
        
        bool credit (double credit);
        bool debit ( double debit);
        double getBalance ();
        double addAccountBalance (double result1, double result2);

};

#endif