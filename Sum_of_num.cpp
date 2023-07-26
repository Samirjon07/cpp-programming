#include<iostream>

using namespace std;

int main(){
    int num;
    int sum=0;
    cout<<"Enter the number you want: "<<endl;
    cin>>num;
    for(int i=0; i<=num ;i++ ){
        sum+=i;
        cout<<"The sum of your number is: "<<sum<<endl;
    }
    return 0;
}
