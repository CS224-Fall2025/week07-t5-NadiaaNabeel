#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>> n;
    int add_num;
    if(n!=10){
        cout<<"Numpy array should have 10 elements"<<endl;
    }else{
        int n1[10];
        int n2[10];
        cout<<"Enter elements for array 1: ";
        for(int i=0; i<10; i++){
            cin>>n1[i];
        }

        cout<<"Enter elements for array 2: ";
        for(int j=0; j<10; j++){
            cin>>n2[j];
        }

        cout<<"Enter number to add to each element: ";
        cin>>add_num;

        cout<<"n1 + n2 = [";
        for(int i=0; i<10; i++){
            if(i<9){
                cout<<n1[i]+n2[i]<<", ";
            }else if(i==9){
                cout<<n1[i]+n2[i]<<"]"<<endl;
            }
            
        }

        cout<<"n1 + "<<add_num<<" = [";
        for(int i=0; i<10; i++){
            if(i<9){
                cout<<n1[i]+add_num<<", ";
            }else if(i==9){
                cout<<n1[i]+add_num<<"]"<<endl;
            }
            
        }

    }

}