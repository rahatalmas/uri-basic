#include <iostream>

using namespace std;

int main() {

    int a;
    int i,even=0;
    for(i=0;i<5;i++)
    {
        cin>>a;
    }
    for(i=0;i<5;i++)
    {
        if(a%2==0)
        {
            even++;
        }
   }

    cout<<even<<" valores pares"<<endl;
    return 0;
}
