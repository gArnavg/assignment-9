//to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int sqr(int x)
{
    return x*x;
}
int countdigits(int x)
{
    int ans = 0;
    while(x > 0) 
    {
        ans++;
        x /= 10;
    }
    return ans;
}
int main()
{
    int x;
    cout<<"Enter the number ";
    cin>>x;
    int numberOfDigits = countdigits(x);
    cout<<"no. of digits are "<<numberOfDigits<<endl<<"and its square is "<< sqr(numberOfDigits) << endl;
    return 0;
}