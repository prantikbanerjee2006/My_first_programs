#include <stdio.h>
#include <stdlib.h>

void square(int side);
int choice();

void main()
{
	l1:
	system("cls");
	system("echo off");
	system("color 5a");
	int side;
	puts("What will be the side: ");
	scanf("%d", &side);
	puts("\n");
	square(side);
	if (choice() == 1)
		{
			system("cls");
			goto l1;
		}
	else
		{
			getch();
		}
}

void square(int side)
{
	for (int i = 1 ; i <= side + 2;  i++)
		{
			printf("*");
		}
	printf("\n");
	for (int i=1; i<=side; i++)
		{
			printf("*");
			for (int j = 1; j <= side; j++)
				{
					printf(" ");
				}
			printf("*");
			printf("\n");
		}
	for (int i = 1 ; i <= side+2; i++)
		{
			printf("*");
		}
	printf("\n");
}
	
int choice()
{
	int c;
	printf("\nWant to run again? (1 for Yes, 0 otherwise) ");
	l2:
	scanf("%d", &c);
	if (c < 0 || c > 1)
		{
			printf("Wrong input. Please try again.\n");
			goto l2;
		}
	else
		{
			return c;
		}
}