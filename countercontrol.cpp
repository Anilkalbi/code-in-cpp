#include<iostream>
using namespace std;
int main()
{
    int total={0};
    int gradecounter={1};
    while (gradecounter<=10)
    {
        cout<<"enter grade:";
        int grade;
        cin>>grade;
        total = total + grade;
        gradecounter = gradecounter+1;
        
}
int average={total/10};
cout<<"\ntotal of all 10 grade is"<<total;
cout<<"\n class average is"<<average;
}