#include <iostream>
using namespace std;
void findHappiness(int n);

int main(){
    int n;
    while(true){
        cout<<"Enter number: ";
        cin>>n;
        if (n<1){
            cout<<"Invalid input! Try again!"<<endl;
        }else{
            findHappiness(n);
            break;
        }
    }
}

void findHappiness(int n){
    int num=n;
    int sum=0;
    while(num>=1){
        
        if(num==1){
            cout<<"It's a Happy Number!"<<endl;
            return;
        }else{
            while(num>0){
                int a=num%10;
                cout<<'a'<<a<<endl;
                num=num/10;
                sum+=(a*a);
                cout<<sum<<endl;
            }
            num=sum;
            sum=0;
            if(num!=1 && num<10){
                cout<<"It's a Sad Number!"<<endl;
                return;
            }
        }
        
        

    }
}
