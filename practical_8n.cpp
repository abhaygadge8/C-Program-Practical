//program to spliting into a number of sub string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[100];
	cout<<"please enter a string which you split"<<endl;
	cin.getline(str,100);
	
	char flag[]=",.!";
	char *token;
	 token= strtok(str,flag);
	 while(token!NULL)
	 {
	 	cout<<token<<endl;
	 	token = strtok(NULL,flag);
	 }
	 return 0;
}
