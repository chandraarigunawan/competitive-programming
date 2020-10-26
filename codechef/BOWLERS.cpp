#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        int a[k];

        for(int i=0; i<k; i++)
        {
            a[i]=i+1;
        }

        if(k==1)
        {
		    if(n==1)
		    {
            cout<<"1"<<"\n";
		    }
		    else
		    cout<<"-1"<<"\n";
		    continue;
		}

        if(k*l<n)
        {
            cout<<"-1";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<a[i%k]<<" ";
            }

        }

        cout<<"\n";
    }
}
