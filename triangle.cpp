#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 float a,b,c;
 cin>>a>>b>>c;
 cout<<showpoint<<fixed<<setprecision(1);
 if(a<b+c && b<c+a && c<a+b)
 {
     cout<<"Area = "<<a+b+b<<endl;
 }
 else
 {
     cout<<"Perimetro = "<<((a+b)*c)/2<<endl;
 }
    return 0;
}
