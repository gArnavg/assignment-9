//Given two numbers a and b, write a function to print all odd numbers between them
#include<iostream>
using namespace std;
void oddnmbr(int a, int b) 
{
    if(a > b) 
    {
        oddnmbr(b, a);
        return;
    }
    for(int i = a; i <= b; ++i) 
    {
        if(i % 2 != 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() 
{
    int a, b;
    cout<<"Enter the numbers ";
    cin >> a >> b;
    cout<<"The numbers are ";
    oddnmbr(a, b);
    return 0;
}