#include<iostream>
using namespace std;
int digisum(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10)+digisum(n/10);
}
int main()
{
    int n;
    cout<<"enetr a number : ";
    cin>>n;
    cout<<"sum of the digits is "<<digisum(n)<<endl;
}