//program for compare the string
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}

