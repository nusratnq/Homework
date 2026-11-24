#include<iostream>
using namespace std;
int prime(int n, int i)
{
    if(n<=1){
    return 0;
    }
    if(i==n){
    return 1;
    }
    if(n%i==0){
    return 0;
    }
    return prime(n, i+1);
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    prime(n, 2);
    if (prime(n, 2))
        cout << "the number is prime.";
    else
    cout<<"the number is composite.";
}