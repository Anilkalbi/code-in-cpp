#include<iostream>
using namespace std;
int main()
{
        int num, temp, rev = 0,r;
    cout << "Enter a number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;
    }
    cout << "\nThe reverse of " << num << "is" << rev;
    return 0;
}