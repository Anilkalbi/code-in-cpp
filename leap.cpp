#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year:";
    cin>>year;
    if(year%4==0)
    {
        cout<<"its an leap year:";
    }
    else
    {
       cout<<"its not an leap year:";
    }
}