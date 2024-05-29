//program to check to stirng pangram or not
#include<iostream>
#include<string>
#include<unordered_set>
#include<stack>
using namespace std;
bool is_pangram(const string& str)
{
	unordered_set<char> letters;
	
	for(char ch:str)
	{
		if(isalpha(ch))
		{
			ch=tolower(ch);
			letters.insert(ch);
			if(letters.size()==26)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	string input;
	cout<<"enter a string:";
	getline(cin,input);
	
	if(is_pangram(input)==true)
	{
		cout<<"the given string is a pangram."<<endl;
	}
	else
	{
		cout<<"the given string is not a pangram"<<endl;
	}
	return 0;
}
