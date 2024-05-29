//l.	C++ Program to Print the First Letter of Each Word of a String
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void printFirstLetters(const string& str) 
{
    istringstream iss(str);
    string word;
    
    while (iss >> word) 
	{
        cout << word[0];
    }
    cout << endl;
}

int main()
 {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "First letters of each word: ";
    printFirstLetters(inputString);

    return 0;
}

