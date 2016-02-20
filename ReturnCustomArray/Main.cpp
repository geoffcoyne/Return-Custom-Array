#include <iostream>
#include <cstdlib>

using namespace std;

//Setting the varibles
int array1 [5];
int foo;

//function for returning the array values
void printarray (int arg[], int length)
{
	for (int n = 0; n < length; ++n)
	{
		if (n == 4)
		{
			cout << arg[n] << endl;
		}
		else
		{	
			cout << arg[n] << ", ";
		}
	}
	cout << endl;
}

int main ()
{
	//Starting for loop
	for (int y = 0; y < 5; ++y)
	{
		cout << "Input a number: ";
		cin >> foo;
		cout << endl;
		cout << "Ok" << endl;
		array1 [y] = foo + array1 [y];
	}

	//returns the values in the array
	printarray (array1, 5);

	//Pauses and ends the program once finished 
	system("pause");
	return 0;
}


