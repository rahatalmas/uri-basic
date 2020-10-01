#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    int code_of_prd1,code_of_prd2,unit_of_prd1,unit_of_prd2;
    float price_for_prd1,price_for_prd2;
    float total_price;
    cout<<fixed<<showpoint<<setprecision(2);
    cin>>code_of_prd1>>unit_of_prd1>>price_for_prd1;
    cin>>code_of_prd2>>unit_of_prd2>>price_for_prd2;
    total_price = (unit_of_prd1*price_for_prd1)+(unit_of_prd2*price_for_prd2);
    cout<<"VALOR A PAGAR: R$ "<<total_price<<endl;
    return 0;
}