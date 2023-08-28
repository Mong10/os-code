#include<bits/stdc++.h>
using namespace std;
int main()
{

   // int ar[1000];ar te eikhane 1000 ta size rakhsi kintu amra vector e joto icha toto man rakhte parbo
    vector<int>v;
    v.push_back(1);//v[0]
    v.push_back(2);//v[1]
    v.push_back(3);//v[2]
    v.push_back(4);//v[3]
    v.push_back(5);//v[4]
   // cout<<v[0]<<" ";
   // cout<<v[1]<<endl;
    //cout<<v.at(0)<<" ";
   // cout<<v.at(1)<<endl;

    //cout<<v[5];
   // cout<<v.size()<<endl;
  // for(int i=0;i<v.size();i++)
  // {
       //cout<<v[i]<<" ";
 //  }
  // cout<<endl;
   //cout<<v.front()<<endl;
   //cout<<v.back()<<endl;
  // cout<<v.size()<<endl;
   //v.clear();
  // cout<<v.size()<<endl;
 // if(v.empty())cout<<"Vector empty"<<endl;
 // else cout<<"Not empty"<<endl;
  //v.pop_back();
  for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
  cout<<endl;
  v.erase(v.begin()+2,v.end());
  for(int i=0;i<v.size();i++)
  {
      cout<<v[i]<<" ";
  }
  cout<<endl;


}
