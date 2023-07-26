#include <iostream>

using namespace std;

int
main ()
{
  int a, b, c;
  char o;
  cout << "Enter numbers with operations: " << endl;
  cin >> a >>o>>b;
  switch (o)
    {
        case '+': 
        c = a + b;
        cout<<c<<endl;
        break;
       
        case '-': 
        c = a - b; 
        cout<<c<<endl;
        break;
       
        case '*': 
        c = a * b; 
        cout<<c<<endl;
        break;
        
        case '/': 
        c = a / b; 
        cout<<c<<endl;
        break;
        
        default:
        cout<<"this not Photomath, this is calculator"<<endl;
        break;
    }
  return 0;
}
