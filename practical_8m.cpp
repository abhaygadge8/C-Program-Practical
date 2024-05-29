//program to insert string into anotherr string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	int n;
	cout<<"please enter any string"<<endl;
	getline(cin,str1);
	cin.ignore();
	cout<<"please enter another string which you wnt to insert"<<endl;
	getline(cin,str2);
	
	cout<<"pleae enter postion whare you want toinsert the strng"<<endl;
	cin>>n;
	str1.insert(n-1,str2);
	cout<<"new string after insertion :"<<str1;
	return 0;
}
