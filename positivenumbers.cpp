#include <iostream>
 
using namespace std;
 
int main() {
 
double arr[6];
int i,count=0;
for(i=0;i<6;i++)
{
    cin>>arr[i];
}
for(i=0;i<6;i++)
{
    if(arr[i]>=0){
        count++;
    }
}
 cout<<count<<" valores positivos\n";
 
    return 0;
}