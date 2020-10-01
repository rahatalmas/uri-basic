#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int time,avgspeed;
    float fuel;
    cin>>time>>avgspeed;
    cout<<fixed<<showpoint<<setprecision(3);
    fuel = (float(avgspeed)*float(time))/12;
    cout<<fuel;
}