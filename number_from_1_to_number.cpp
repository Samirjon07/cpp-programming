\*Напишите программу, которая запрашивает у пользователя целое число N и выводит на экран только четные числа от 1 до N.*\

#include <iostream>

using namespace std;
int main(){
    int a = 0;
    int number;
    cout << "Enter the number: ";
    cin >> number;
    while (a < number)
    {
        a++;
        cout << a << endl;
    }
    
    return 0;
}
