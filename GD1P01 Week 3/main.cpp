#include <iostream>

using namespace std;

int main()
{
	//declaring varibles and initalising them to values.
	char letter = 'A';
	int integer = 0;
	float dec = 0.0f;

	//Prompt the user to enter values for the char type variable
	cout << "Enter a letter: ";
	cin >> letter;

	cout << endl;

	//Prompt theuser to enter values for the int type variable
	cout << "Enter an integer: ";
	cin >> integer;

	cout << endl;

	//Prompt the user to enter values for the float type variable.
	cout << "Enter a decimal: ";
	cin >> dec;

	cout << endl;

	//Data has been read in; now print the data to the screen.
	cout << "Letter: " << letter;
	cout << endl;

	cout << "Integer: " << integer;
	cout << endl;

	cout << "Float: " << dec;
	cout << endl;


	return (0);
}