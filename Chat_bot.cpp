#include <iostream> //chat bot

using namespace std;

int main(){
    string text;
    cout<<"-Hello sir!"<<endl;
    cin>>text;
    if(text=="hi" || "hello")
    {
        cout<<"-My name is Jarvis. How can I help you? "<<endl;
        cin>>text;
        if(text=="I have to learn math, Where can I do that?" ||"i have to learn math, where can i do that?" )
        {
            cout<<"-Oh, There is a centre called Mkh_Math centre "<<endl;
            cin>>text;
            if(text=="Where is that?")
            {
                cout<<"-It is on Termez street 46"<<endl;
                cin>>text;
                if(text=="I need an administration number to contact")
                {   
                    cout<<"-+998(66)239-09-99 = call them and if tell them that I send you, they will make a discount "<<endl;
                    cin>>text;
                    if(text=="Thank you ")
                    {
                        cout<<"-You are welcome!";
                    }
                        
                }
            }
        }
    }
    return 0;
}
