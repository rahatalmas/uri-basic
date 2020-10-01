#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x;
    cin>>y;
    float average;
    average = x/y;
    cout<<fixed<<showpoint<<setprecision(3);
    cout<<average<<" km/l"<<endl;
}