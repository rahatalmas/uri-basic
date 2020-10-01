#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     int em,wh;
     float sp;
     cin >> em >> wh;
     cin >>sp;
     cout << fixed << showpoint << setprecision(2);
     cout << "SALARY = "<<wh*sp<<endl;
     return 0;
}