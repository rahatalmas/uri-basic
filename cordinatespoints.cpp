#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Q1"<<endl;
    }
        if(x>0 && y<0)
    {
        cout<<"Q4"<<endl;
    }
        if(x<0 && y>0)
    {
        cout<<"Q3"<<endl;
    }
        if(x<0 && y<0)
    {
        cout<<"Q2"<<endl;
    }
    if(x==0 && y== 0)
    {
        cout<<"origem"<<endl;
    }
    

}