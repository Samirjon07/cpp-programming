#include <iostream>

using namespace std;

void calculate_with_for (){
    int num;
    cout<<"Enter the number you want: "<<endl;
    cin>>num;
    for(int i=2; i<=num ;i+=2 ){
        cout<<" "<<i;
    }
}




void calculate_with_for_if()
{
    int N;
    cout << "Enter integer : ";
    cin >> N;
 
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        cout << i << endl;
    }
}

int main() {
    calculate_with_for();
    return 0;
}
