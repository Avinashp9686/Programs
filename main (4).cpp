#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the price of both chocolate"<<endl;
        cin>>a>>b;
        if(a<b)
        {
            cout<<"first chocolate is cheaper the second"<<endl;
        }
        else if(b<a)
        {
            cout<<"second chocolate is cheaper then first"<<endl;
        }
        else
        {
            cout<<"you can buy any of them they have same value"<<endl;
        }return 0;
    }
}

 

