#include<bits/stdc++.h>
using namespace std;
int main()
{
   // vector<int>v;
   // v.push_back(1);
   // v.push_back(2);
 //   v.push_back(3);
   // v.push_back(4);
  //  v.push_back(5);
   // for(int i=0;i<v.size();i++)
   // {
     //   cout<<v[i]<<" ";
   // }
   // cout<<endl;
    //v.insert(v.begin()+3,10);
   // v.insert(v.begin()+2,3,10);
   // for(int i=0;i<v.size();i++)
   // {
   //     cout<<v[i]<<" ";
   // }
   // cout<<endl;

    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector<int>v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);

    cout<<"Before swapping"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    swap(v1,v2);
    cout<<"Afte swapping"<<endl;
     for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

}
