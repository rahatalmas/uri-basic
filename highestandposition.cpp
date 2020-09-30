#include <iostream>

using namespace std;

int main() {

 int arr[100];
 int i,pos=1;
 int max=arr[0];
 for(i=0;i<100;i++)
 {
     cin>>arr[i];
     if(arr[i]>arr[0])
     {
         pos++;
         max=arr[i];
     }
 }

 cout<<max<<endl<<pos<<endl;
 return 0;
}
