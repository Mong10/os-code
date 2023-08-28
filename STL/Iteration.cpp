#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>:: iterator it;
    it=v.begin()+3;
    cout<<*it<<endl;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
}
