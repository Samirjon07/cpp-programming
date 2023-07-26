#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter the number you want: "<<endl;
    cin>>num;
    for(int i=2; i<=num ;i+=2 ){
        cout<<" "<<i;
    }
    return 0;
}
