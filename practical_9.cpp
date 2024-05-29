#include<iostream>
using namespace std;
int main()
{
	string str[10], temp;
	
	cout<<"enter 10 words: "<<endl;
	
	int i;
	for(i=0;i<10;i++)
	{
		getline(cin,str[i]);
		
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-i;j++)
		{
			if(str[j]>str[j+1])
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	cout<<"in lexicographicll order :"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
