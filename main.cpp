#include <iostream>

using namespace std;

int main(){
    // Программа выставления оценок 
    int score;
        cout<< "Введите свой балл - ";
        cin>>score;
            if(score>=95 && score<100){
               cout <<"A+ "<<endl;}
                else if (score>=90 && score<95){
                cout<<"A"<<endl;
                }
                else if (score>=85 && score<90){
                cout<<"B+"<<endl;
                }
                else if (score>=80 && score<85){
                cout<<"B"<<endl;
                }
                else if (score>=75 && score<80){
                cout<<"C+"<<endl;
                }
                else if (score>=70 && score<75){
                cout<<"C"<<endl;
                }
                else if (score>=60 && score<70){
                cout<<"D"<<endl;
                }
            else{cout<<"Failed, Retake please"<<endl;}
        
            
    
    
    
    
    
    return 0;
}