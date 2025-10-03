#include <iostream>
using namespace std;
class BankAccount{
    private:
        string accountTitle;
        int balance;
        int limit;
    public:
        
        BankAccount(){
            accountTitle=" ";
            balance=0;
            limit=0;
        }

        BankAccount(string Title, int bal, int lim){
            accountTitle=Title;
            balance=bal;
            limit=lim;
        }

        void deposit(int amount){
            balance+=amount;
            cout<<"Successfully Deposited "<<amount<<endl;
            return;

        }

        void withdraw(int amount){
            if(amount<=balance && amount<=limit){
                cout<<"Withdrew "<<amount<<" successfully"<<endl;
            }else{
                if(amount>balance){
                cout<<"Withdraw failed , insufficient funds"<<endl;
                }if(amount>limit){
                cout<<"Withdraw Failed : daily limit is "<<limit<<endl;
                }

            }
            return;
        }




};

int main(){
    string Title;
    int bal;
    int lim;
    int amount;
    char option;

    cout<<"Enter the Account Details: ";
    cin>>Title, bal, lim;
    BankAccount account(string Title, int bal, int lim);
    
    while(true){
        cout<<"To withdraw enter 'w', 'd' for deposit and 'q' for closing accout: "<<endl;
        cin>>option;
        if(option=='w'){
            cin>>amount;
            account.withdraw(amount);
        }else if(option=='d'){
            cin>>amount;
            account.deposit(amount);
        }else if(option=='q'){
            break;
        }else{
            cout<<"Enter valid option!"<<endl;
            return;
        }
    }
    
    cout<<"Closing Status:"<<endl;
    cout<<"Title: "<<Title <<", "<<"Current Balance: "<< account.balance << ", Daily Limit: "<< lim;
    


}