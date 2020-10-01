#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    int max;
    cin>>a>>b>>c;
    if(a>b && a>c){
        max = a;
    }
    else if (b>a && b>c){
        max = b;
    }
    else if(c>a && c>b){
        max = c;
    }
    cout<<max<<" eh o maior "<<endl;
    
    return 0;
}