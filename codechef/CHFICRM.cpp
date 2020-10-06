#include <bits/stdc++.h>
using namespace std;

int main() {
int testcase=0;
int people=0;
int money=0;
cin>>testcase;
for(int j=0;j<testcase;j++)
{
    cin>>people;
    #only 3 type of money (Rs 5, 10, and 15)
    int chefMoney5=0;
    int chefMoney10=0;
    int chefMoney15=0;
    int changes = 0;
    bool result = true;
    for(int i=0;i<people;i++) {
        cin>>money;
        changes = money - 5;
        if(result) {
            if(changes>0) {
                if(changes==5) {
                    if(chefMoney5>=1) {
                        chefMoney5 --;
                        chefMoney10 ++;
                    }
                    else {
                        result = false;
                    }
                }
                else if(changes==10) {
                    #can use Rs 10 or 5 (need 2 Rs 5)
                    if(chefMoney10>=1) {
                        chefMoney10 --;
                        chefMoney15 ++;
                    }
                    else if(chefMoney5>=2) {
                        chefMoney5 --;
                        chefMoney15 ++;
                    }
                    else {
                        result = false;
                    }
                }
            }
            else {
                chefMoney5 ++;
            }
        }
    }
	if(result)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
  return 0;
}
