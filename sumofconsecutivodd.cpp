#include <iostream>

using namespace std;

int main() {

int x,y;
int i;
int sum=0;
cin>>x>>y;
for(i=x;i>y;i--)
{
    if(i%2!=0)
    {
        sum=sum+i;
    }
}
cout<<sum;
    return 0;
}
