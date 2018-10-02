#include <iostream>
#include "Account.h"

using namespace std;

//constuctor
Account:: Account(double Account_Balance){

    if (Account_Balance>= 0){
        Account_Balance_m = Account_Balance;
    }
    else{

        Account_Balance_m = 0;
        cout<< "Initial Balance is invalid.\n";
    }

}

//default constructor
Account:: Account (){
    Account_Balance_m = 0;
}
//credit adds an amount to the current balance
bool Account::  credit (double credit){

    Account_Balance_m = Account_Balance_m + credit;


}
//debit withdraws money from the Account
//makes sure amount does not exceed the Account's balance, if it does, print out a message
bool Account:: debit ( double debit){

    if (Account_Balance_m > debit){
        Account_Balance_m = Account_Balance_m - debit;
    }
    else{
        cout << "Debit amount exceeded account balance \n" ;
    }

}
//return current balance
double Account::  getBalance (){

    return Account_Balance_m;
}
// add the balances in two accounts and return the total
double Account:: addAccountBalance (double result1, double result2){

   
    double sum = result1+ result2;

    return sum;
}