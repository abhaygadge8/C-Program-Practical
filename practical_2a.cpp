//write a program to check given number prime or not
#include<iostream>
using namespace std;
int main()
{
	int n;
	char nprime = true;
	cout<<"please enter any number to check prime or not"<<endl;
	cin>>n;
	int i;
	if(n==0 || n==1)
	{
		nprime = false;
	}
		{
			for(i=2;i<n;i++)
			if(n%i==0)
			{
				nprime = false;
				break;	
			}
				
		}
	if(nprime)
		cout<<n<<" is a prime number";
	else
		cout<<n<< " is a not prime numer";
	
	return 0;
}
