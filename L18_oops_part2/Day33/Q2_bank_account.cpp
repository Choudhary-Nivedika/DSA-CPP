#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

    public:
    BankAccount(int accNum, double bal){
         accountNumber = accNum;
         balance = bal;
    }
    
    void deposit(double amount){
        balance += amount;

    }

    void withdraw(double amount){

        if(amount <= balance){
            balance -= amount;
        }
        else{
            cout<<"No sufficient balance for this withdrawal"<<endl;
        }
    }

    double getBalance(){
        return balance;
    }

};

int main(){
    BankAccount myAccount(123456, 500.0);

    myAccount.deposit(150.0);
    myAccount.withdraw(100.0);
    cout<<"Current balance: Rs."<<myAccount.getBalance()<<endl;

    
    return 0;
}