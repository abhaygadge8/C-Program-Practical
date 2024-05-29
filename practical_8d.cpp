//write program to Raplace a character in string
#include<iostream>
#include<string>
using namespace std;
string replace(string,char,char);
int main()
{
	string str="rahul";
	char c1='r';
	char c2='a';
	string str_cpy = replace(str,c1,c2);
	cout<<"Replaceed string is :"<< str_cpy<<endl;
	
	return 0;
}
string replace(string s,char c1,char c2)
{
	int n=s.size();
	for(int i=0;i<n;i++)
	{
		if(s[i]==c1)
		{
			s[i]==c2;
		}
	}
	return s;
}
