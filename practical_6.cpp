/*6.	C++ provides different methods to generate some random numbers. Write a C++ program in which you 
have to use one of these methods to generate 10 random numbers of type double.*/


#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{

	// Providing a seed value
	srand((unsigned) time(NULL));

	// Get a random number
	for(int i=1; i<=10; i++){
		
		// Retrieve a random number between 100 and 200
		// Offset = 100
		// Range = 101
		double random = 100000000000+(rand() % 1000000001);

		// Print the random number
		cout<<random<<endl;
	}
	

	return 1;
}
