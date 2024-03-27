#include<iostream>
using namespace std;
int main()
{
    double a, b;
    char s;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter operation to be performed: ";
    cin>>s;
    switch(s)
    {
        case '+':
        cout<<a<<"+"<<b<<"="<<(a+b);
        break;
        case '-':
        cout<<a<<"-"<<b<<"="<<(a-b);
        break;
        case '*':
        cout<<a<<"*"<<b<<"="<<(a*b);
        break;
        case '/':
        cout<<a<<"/"<<b<<"="<<(a/b);
        break;
        return 0;
    }
}