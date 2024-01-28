#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        //space 1
        for(int j = 0;j<i;j++)
        cout<< " ";
        //star
        for(int j=0;j<2*n -(2*i+1);j++)
         cout<< "*";
        //space 2
        for(int j = 0;j<i;j++)
        cout<< " ";
        cout<<endl;
    }
}