//program to detemine the unicode(ascii) to index
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
		int code=abhay[i];
		cout<<"\n the unicode code point At"<<" is = "<<code; 
	}
	return 0;
}
