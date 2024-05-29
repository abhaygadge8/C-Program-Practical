//program concatenate two string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"please enter first string s1 and second s2"<<endl;
	cin>>s1>>s2;
	string s3=s1.append(s2);
	cout<<"string after concatenate :"<<s3<<endl;
	return 0;
}
