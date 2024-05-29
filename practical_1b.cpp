//Write a C++ program to Multiply any two numbers taken from user 
// in your defined function 
#include<iostream>
using namespace std;
float multiplication(float a , float b)
{
    return a*b;
}
int main()
{
     float x,y,mult;
   cout<<"Please enter any two numbers for multiplication" <<endl;
   cin>>x>>y;
   mult=multiplication(x,y);
   cout<<"the multiplication of " <<x << " and " <<y <<" is " <<mult<<endl;
return 0;
   
}
