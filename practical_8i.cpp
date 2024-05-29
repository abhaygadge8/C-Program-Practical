//program for vector of string in lexicographically ascending order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> strings;
	int n;
	cout<<"How many stirng do you eant to sort"<<endl;
	cin>>n;
	cout<<"enter the strings"<<endl;
	cin.ingore();
	
	for(int i=0;i<n;i++)
	{
		strings str;
		getline(cin,str);
		strings.push_back(str);
		sort(string.begin(),strings.end());
		
		cout<<"sorted string in lexicographical :"<<endl;
		for(const string& str: strings)
		{
			cout<<str<<endl;
		}
	}
	return 0;
}
