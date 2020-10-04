#include <bits/stdc++.h>
using namespace std;
 
int main() {
int testcase=0;
cin>>testcase;
for(int j=0;j<testcase;j++)
{
	int counter=1;
	int limak,bob;
	cin>>limak>>bob;
	while(limak>=0 && bob>=0)
	{
		if(counter%2==1)
		{
			limak-=counter;
		}
		else
		{
			bob-=counter;
		}
		counter++;
	}
	if(limak<0)
	{
		cout<<"Bob"<<endl;
	}
	else
	{
		cout<<"Limak"<<endl;
	}
}
  return 0;
} 
