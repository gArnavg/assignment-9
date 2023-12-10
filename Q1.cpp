//Write a function to print squares of first n natural numbers
#include<iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
void sqrfcn(int n) 
{
cout<<"Enter The Desired Number ";
cin>>n;
for(int i = 1; i <= n; ++i)
{
    cout <<"Square of "<< i << " is " << square(i) << endl;
}
}
int main()
{
    int n;
    cin >> n;
    sqrfcn(n);
    return 0;  
}