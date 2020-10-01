#include <iostream>
 
using namespace std;
 
int main() {
 
int t;
int n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    if(n == 0 )
    {
        cout<<"NULL"<<endl;
    }
    else if(n%2 !=0)
    {
        if(n>0)
        {
            cout<<"ODD POSITIVE"<<endl;
        }
        else
        {
            cout<<"ODD NEGATIVE"<<endl;
        }
    }
    else if(n%2 == 0)
    {
       if(n>0)
        {
            cout<<"EVEN POSITIVE"<<endl;
        }
        else
        {
            cout<<"EVEN NEGATIVE"<<endl;
        }
    }
    
}
 return 0;
}