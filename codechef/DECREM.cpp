#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int l,r;
       cin>>l>>r;
       if(l<=(r/2))
       {
           cout<<"-1"<<"\n";
       }
       else
        cout<<r<<"\n";
   }



}
