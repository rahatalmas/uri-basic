#include <iostream>

using namespace std;

int main() {

int n;
cin>>n;
int arr[n];
int i,in=0,out=0;
for(i=0;i<n;i++)
{
    cin>>arr[i];
    if(arr[i]>=10 && arr[i]<=20)
    {
        in++;
    }
    else
    {
        out++;
    }
}
cout<<in<<" in"<<endl<<out<<" out"<<endl;
    return 0;
}
