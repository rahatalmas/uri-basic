#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string name;
    double salary,total_sold,salary_with_bonus;
    getline(cin,name);
    cin >> salary >> total_sold ;
    cout << fixed << showpoint << setprecision(2);
    salary_with_bonus = salary + (15*total_sold)/100;
    cout << "TOTAL = R$ " << salary_with_bonus << endl;
    return 0;
}