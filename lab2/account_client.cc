#include <iostream>
#include "Account.h"

using namespace std;

int main(){

    Account Account1;
    Account Account2 (100);
    
    double debit_Acc1;
    double debit_Acc2;
    double credit_Acc1;
    double credit_Acc2;
    int option;

    
    do{
        cout<< "Enter 1 if you would like to debit, enter 2 if you would like to credit, enter 3 if you would like to add account balances, and enter 4 to quit \n";
        cin>> option;
        switch(option){
            case 1:
                cout<< "\n Enter amount to withdraw from Account 1:";
                cin>> debit_Acc1;
                cout << "\n Enter amount to withdraw from Account 2:";
                cin>> debit_Acc2;

                Account1.debit(debit_Acc1);
                Account2.debit(debit_Acc2);

                cout<< "The new balance for account 1 is: "<<Account1.getBalance()<< endl;
                cout<< "The new balance for account 2 is: "<<Account2.getBalance()<< endl;
                break;
            case 2:
                cout<< "\n Enter amount to add to Account 1:";
                cin>> credit_Acc1;
                cout << "\n Enter amount to add to Account 2:";
                cin>> credit_Acc2;

                Account1.credit(credit_Acc1);
                Account2.credit(credit_Acc2);

                cout<< "The new balance for account 1 is: "<<Account1.getBalance()<< endl;
                cout<< "The new balance for account 2 is: "<<Account2.getBalance()<< endl;
                break;
            case 3:
                cout<< "The total amount in both accounts is:" << Account1.addAccountBalance(Account1.getBalance(), Account2.getBalance()) << endl;
                break;
            case 4:
                exit(0);
        }
    }while(1);
}
