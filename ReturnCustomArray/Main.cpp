#include <iostream>
#include <cstdlib>

using namespace std;

//Setting the varibles
string array1 [50000];
string foo = "n";
int y = 1;

//function for returning the array values
void printarray (string arg[], int length)
{
	for (int n = 1; n < length; ++n)
	{
		//If and else statements help with formatting 
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
	while (1)
	{
		//retrives string from user
		cout << "Input a string or type finished to break the loop and print the array: ";
		cin >> foo;
		//checks if user is trying to break 
		if (foo == "finished") 
		{
			break;
		}
		//tells the user the string is retrived
		cout << "Ok \n" << endl;
		//adds the string to the array and changes the value of y to match the part of the array the program is on
		array1 [y] = foo;
		y = y + 1;
	}

	//changes y to y + 1 if statement is a saftey measure 
	if (y > 1)
	{
		y = y + 1;
	}

	//returns the values in the array if statement is a saftey measure to prevent crashes 
	if (y > 1)
	{
		printarray (array1, y);
	}

	//Pauses and ends the program once finished 
	system("pause");
	return 0;
}