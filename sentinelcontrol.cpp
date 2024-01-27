#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int total=0;
    int gradecounter=0;
    cout<<"enter grade or -1 to quit:";
    int grade;
    cin>>grade;
    while(grade!=-1)
    {
        total = total+grade;
        gradecounter = gradecounter+1;
        cout<<"enter grade or -1 to quit:";
        cin>>grade;
    }
    if(gradecounter!=0)
    {
        double average(static_cast<double>(total)/gradecounter);
        cout<<"\ntotal of the :"<< gradecounter<<endl
    <<"grade entered is:"<<total;
        cout<<setprecision(2)<<fixed;
        cout<<"\nclass average is "<<average<<endl;
        }
        else
        {
            cout<<"no grade were entered "<<endl;
        }
}