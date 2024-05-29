//program to remove leading zeros
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"please enter the string which have leading zeros"<<endl;
	string str;
	cin>>str;
	int i=0;
	while(str[i]==0)
	{
		str.erase(0,1);
	}
	
	cout<<"string removing leading to zero "<<str<<endl;
	
	return 0;
}
