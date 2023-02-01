#include<iostream>
using namespace std;
int main()
{
	int followers,following;
	cout<<"enter the followers and th following"<<endl;
	cin>>followers>>following;
	if(following>=10*followers)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}return 0;
	}
