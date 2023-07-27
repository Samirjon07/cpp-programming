#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,v;
    cin>>a>>b>>v;
    switch(v){
        case 1:
        c=pow(a,b);
        cout<<c<<endl;
        break;
        
        case 2:
        c=a%b;
        cout<<c<<endl;
        break;
        
        case 3:
        c=a/b;
        cout<<c<<endl;
        break;
        
        case 4:
        c=sqrt(a);
        cout<<c<<endl;
        break;
        
        case 5:
        while (b) {
        c = a % b;
        a = b;
        b = c;
        }
        cout<<a<<endl;
        
        break;
        
        default:
        cout<<"this is not Photomath ";
    }
    return 0;
    
}
