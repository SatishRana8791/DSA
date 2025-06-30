#include<iostream>
#include<vector>
using namespace std;
int main()
{
   // //declare a vector
   // vector<int>v;
   // vector<int>v1(5,1);
   // cout<<v.size()<<endl;
   // cout<<v1.size()<<endl;
   // v.push_back(2);
   // v.push_back(4);
   // v.push_back(6);
   // cout<<v.size();
   // cout<<v1.size()<<endl;
   // //update value
   // v[1]=5;
   // cout<<v.size();
   // cout<<v1.size();
   // cout<<v.capacity()<<endl;
   // v.push_back(8);
   // cout<<v.size();
   // cout<<v1.size();
   // cout<<v.capacity();
   // vector<int>v3={1,2,3,4,5};
   // cout<<v3.size();
   //delete value from vector

   //vector<int>vnew;
   //vnew.push_back(3);
   //vnew.push_back(4);
   //vnew.push_back(5);
   // vnew.push_back(6);
   // vnew.push_back(7);
   // cout<<vnew.size()<<endl;
   // vnew.pop_back();
   // cout<<vnew.size();
   // cout<<vnew.capacity()<<endl;
   // //erase a particular element
   // vnew.erase(vnew.begin()+1);
   // cout<<vnew.size();
   // cout<<vnew.capacity()<<endl;
   // for(int i=0;i<vnew.size();i++)
   // {
   //     cout<<vnew[i]<<" ";
   // }
   // //insert a particular element
   // vnew.insert(vnew.begin()+1,50);
   // cout<<endl;
   // for(int i=0;i<vnew.size();i++)
   // {
   //     cout<<vnew[i]<<" ";
   // }
   // vnew[1]=37;
   // for(int i=0;i<vnew.size();i++)
   // {
   //     cout<<vnew[i]<<" ";
   // }
   // cout<<endl;
   // //remove all the element
   // vnew.clear();
   // cout<<vnew.size();
   // cout<<vnew.capacity()<<endl;
   
vector<int>arr;
arr.push_back(2);
arr.push_back(21);
arr.push_back(22);
arr.push_back(222);
cout<<arr[0]<<endl;
cout<<arr.front()<<endl;
cout<<arr[arr.size()-1];
cout<<arr.back();
cout<<endl;

vector<int>a;
//copy value of 1 vector to another
a=arr;
cout<<a.size()<<endl;
for(auto it=arr.begin();it!=arr.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl;
for(auto i:arr)
cout<<i<<" ";
cout<<endl;
//reverse(arr.begin(),arr.end()+3);
//reverse(arr.begin() + 3, arr.end());
//reverse(arr.begin(), arr.end());
//for(auto it=arr.begin();it!=arr.end();it++)
//{
//    cout<<*it<<" ";
//}



}
