#include<iostream>

using namespace std;

int main(){
    double num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if(num>0){
        cout<<"Positive number"<<endl;
    }
    else if(num<0){
        cout<<"Negative number"<<endl;
    }
    else{
        cout<<"Equal to 0"<<endl;
    }
    return 0;
    
}
