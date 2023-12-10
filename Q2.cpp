//Area of Circle
#include<iostream>
using namespace std;
float Area(float r)
{
    return 3.14*r*r;
}
int main()
{
    float r;
    cout<<"Enter the radius ";
    cin >> r;
    cout<<"The area of circle with radius "<<r<<" is "<<Area(r)<<" sqr units";
    return 0;  
}