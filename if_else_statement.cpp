#include<iostream>

using namespace std;
int main()
{
	int x,y,age;
	cout << "Please type numerals only!\n Type '1' to close";
	cin >> y;
	if (y == 1)
	{
		goto aa;
	}
	else
	{
		cout << "Why didn't you close an application?\n Give me value of 'x':"; 
	   	cin >> x;
		if ( x > 10 )
		{
			cout << "ARE U CRAZY? You gave me a number greater than 10!?\n So now, try to guess how old my cat is:>";
			cin >> age;
			if (age == 7)
			{
				cout << "mIAUUUUU!!";
				system("pause");
			}
			else
			{
				goto aa;
			}
		}
	}
	aa:
	return(0);
}
