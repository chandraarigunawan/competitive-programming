#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int a[26]={0};

       for(int i=0 ;i<n; i++)
       {
           a[s[i]-'a']++;
       }

       if(a[s[n-1]-'a']>=2)
       {
           cout<<"YES"<<"\n";
       }
       else
        cout<<"NO"<<"\n";
   }



}
