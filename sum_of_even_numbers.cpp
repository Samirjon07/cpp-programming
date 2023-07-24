#include <iostream>

using namespace std;

void calculate_with_while()
{
    int num = 0;
    int total = 0;
    
    while (num < 100)
    {
        num = num +2;
        total += num;
    }
    cout << "The sum of even numbers is " << total << endl;
}

void calculate_with_for(){
    int total = 0;
    for(int i = 0; i <= 100; i += 2){
        total+=i;
    }
    
    cout<<total<<endl;
}

int main() {
    calculate_with_for();
    return 0;
}
