/*Напишите программу, которая запрашивает у пользователя два целых числа a и b. Затем предложите пользователю выбрать одну из следующих операций:
а) Найти наибольший общий делитель (НОД) чисел a и b.
б) Найти наименьшее общее кратное (НОК) чисел a и b.
в) Возвести число a в степень b.
г) Посчитать остаток от деления числа a на b.
д) Посчитать целую часть от деления числа a на b.
е) Посчитать квадратный корень числа a.
При выборе каждой операции использовать оператор switch и вывести результат на экран.*/


#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c,v;
    cout<<"Enter first number: "<<endl; 
    cin>>a;
    cout<<"Enter second number: "<<endl; 
    cin>>b;
    cout<<"Enter operator: "<<endl<<"1- а в b степени"<<endl<<"2-остаток от деления a на b"<<endl<<"3- целая часть от деления числа a на b"<<endl<<"4-квадратный корень числа a"<<endl<<"5-НОД(a,b)"<<endl; 
    cin>>v;
    switch(v){
        
        
        case 1:
        c=pow(a,b);
        cout<<"а в b степени равно: "<<c<<endl;
        break;
        
        case 2:
        c=a%b;
        cout<<"остаток от деления a на b равно: "<<c<<endl;
        break;
        
        case 3:
        c=a/b;
        cout<<"целая часть от деления числа a на b равно: "<<c<<endl;
        break;
        
        case 4:
        c=sqrt(a);
        cout<<"квадратный корень числа a равно: "<<c<<endl;
        break;
        
        case 5:
        while (b) {
        c = a % b;
        a = b;
        b = c;
        }
        cout<<"НОД(a,b) равно : "<<a<<endl;
        break;
        
        default:
        cout<<"this is not Photomath ";
    }
    return 0;
    
}
