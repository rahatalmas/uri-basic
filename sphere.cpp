#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R;
    cin>>R;
    double volume_of_sphere = (4/3.0)*3.14159*R*R*R;
    cout<<fixed<<showpoint<<setprecision(3);
    cout<<"VOLUME = "<<volume_of_sphere<<endl;
}