#include<iostream>

using namespace std;
int main()
{
	int variable = 8, second = 4;
	int *pointer;

	pointer = &variable;

	cout << "variable = " << variable
		<< "\n read by a pointer = "
		<< *pointer << endl;

	variable = 10;
	cout << "variable = "<< variable
		<< "\n read by a pointer = "
		<< *pointer << endl;

	*pointer = 200;
	cout << "variable = " << variable
		<< "\n read by a pointer = "
		<< *pointer << endl;

	pointer = &second;
	cout << "variable = "<< variable
		<< "\n read by a pointer = "
		<< *pointer << endl;
	system("pause");
}
