#include <stdio.h>
#include <stdlib.h>

void loadValue( int *a, int *b );
int addition( int a, int b );
int subtraction( int a, int b );
int multiplication( int a, int b );
int division( int a, int b ); 

#define line "---------------------------\n"

int main(void)
{
	int a, b = 0;
	char sign;
	int result = 0;
	int choice = 0;

	// choice loop 
	do
	{
		printf("CHOICE MENU \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
		printf( line );

		printf("Your choice: ");
		scanf("%d", &choice );
		loadValue( &a, &b );

		switch( choice )
		{
		case 1:
			result = addition( a, b );
			break;
		case 2:
			result = subtraction( a, b );
			break;
		case 3:
			result = multiplication( a, b );
			break;
		case 4:
			result = division( a, b );
			break;
		default:
			printf("Choice error!");
		}

		printf("Result: %d\n", result );
		printf( line );

		printf("\nGo back to main menu? y/n ");
		scanf("%s", &sign );

		// clear screen 
		system("cls");
	}
	while( sign == 't' );
	return 0;
}

void loadValue( int *a, int *b )
{
	int x, y;

	printf("Type a: ");
	scanf("%d", &x );

	printf("Type b: ");
	scanf("%d", &y );

	*a = x;
	*b = y;
}

int addition( int a, int b )
{
	return a + b;
}

int subtraction( int a, int b )
{
	return a - b;
}

int multiplication( int a, int b )
{
	return a * b;
}

int division( int a, int b )
{
	return a / b;
}
