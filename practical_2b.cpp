/*Write a C++ program to decide the given number is prime or not 
(i)	In main()     (ii) in your defined function Prime().*/
#include<iostream>
using namespace std;
char prime(int);
int main()
{
	int n;
	cout<<"please enter any number which want to check prime or not"<<endl;
	cin>>n;
	if(prime(n))
		cout<<n<<" is prime number"<<endl;
	else
		cout<<n<<" is not prime number"<<endl;
}
char prime(int n)
{
	char nprime= true;
	if(n==0 || n==1)
	{
		nprime=false;
	}
	int i;
	for(i=2;i<n;i++)
	if(n%i==0)
	{
		nprime=false;
		break;
	}
	return nprime;
}
