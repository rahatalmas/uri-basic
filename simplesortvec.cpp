#include <iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
int main() {
 int x,i;
vector<int>vec;
for(i=0;i<3;i++)
{
    cin>>x;
    vec.push_back(x);
}
sort(vec.begin(),vec.end(),greater <int>());
for(i=0;i=3;i++)
{
    cout<<vec[i]<<endl;
}
    return 0;
}

