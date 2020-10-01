#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x,y,d;
    cin>>x1>>y1;
    cin>>x2>>y2;
    x=x2-x1;
    y=y2-y1;
    d=sqrt(x*x+y*y);
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<d<<endl;
}