//program for access element from string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string abhay;
	cout<<"please enter any string"<<endl;
	cin>>abhay;
	for(int i=0;i<abhay.size();i++)
	{
		cout<<i+1<<" element of string is: "<<abhay[i]<<endl;
	}
	return 0;
}
