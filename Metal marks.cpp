#include<iostream>

using namespace std;

int main(){
    double a,b,c;
    cout<<"a-metal hardness, b-carbon content, c-tensile strength"<<endl<<" Enter:"<<endl;
    cin>>a>>b>>c;
    if(a>50 && b<0.7 && c>5600){
        cout<<"10 marks"<<endl;
    }  
    else if(a>50 && b<0.7 ){
        cout<<"9 marks"<<endl;
    }
    else if( b<0.7 && c>5600){
        cout<<"8 marks"<<endl;
    }
    else if(a>50 && c>5600 ){
        cout<<"7 marks"<<endl;
    }
    else if(a>50 || b<0.7 || c>5600){
        cout<<"6 marks"<<endl;
    }
    else {
        cout<<"5 marks"<<endl;
    }
    return 0;
    
}
