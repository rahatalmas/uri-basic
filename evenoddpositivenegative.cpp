#include <iostream>
using namespace std;
int main()
{
   int arr[5];
   int i,even=0,odd=0,pos=0,neg=0;
   for(i=0;i<5;i++)
 {
    cin>>arr[i];
    if(arr[i]%2==0)
    {
        even++;
    }
    else if(arr[i]%2!=0)
    {
        odd++;
    }
    if(arr[i]>0)
    {
        pos++;
    }
    else if(arr[i]<0)
    {
        neg++;
    }
 }
 cout<<even<<" valor(es) par(es)"<<endl;
 cout<<odd<<" valor(es) impar(es)"<<endl;
 cout<<pos<<" valor(es) positivo(s)"<<endl;
 cout<<neg<<" valor(es) negativo(s)"<<endl;
 return 0;
 }
