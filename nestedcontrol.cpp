#include<iostream>
using namespace std;
int main()
{
int passes=0;
int failure=0;
int studentcounter=1;
while(studentcounter<=10){
    cout<<"enter result(1=pass,2=fail):";
    int result;
    cin>>result;
    if(result==1)
    {
        passes = passes+1;
    }
    else{
        failure = failure+1;
    }
    studentcounter=studentcounter+1;
}
cout<<"passed:"<<passes<<"\nfailed:"<<failure<<endl;
if(passes>8){
    cout<<"bonus to instructor!"<<endl;
}
else
{
cout<<" no bonus to instructor!"<<endl;
}
}