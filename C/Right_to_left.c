#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void to_right();
void to_left();

int main(void)
{
	srand(time(NULL));
	system("cls");
	to_right();
	system("cls");
	to_left();
	return 0;
}

void to_right()
{
	for (int i = 1; i <=79; i++)
		{
			for (int j = 1; j <= i; j++)
				{
					printf(" ");
				}
			int x = (rand() % 8+1);
			switch (x)
				{
					case 1:
						system("color 08");
						break;
					case 2:
						system("color 09");
						break;
					case 3:
						system("color 0a");
						break;
					case 4:
						system("color 0b");
						break;
					case 5:
						system("color 0c");
						break;
					case 6:
						system("color 0d");
						break;
					case 7:
						system("color 0e");
						break;
					case 8:
						system("color 0f");
						break;
				}
			printf("_");
			sleep(75);
			system("cls");
		}
}
	
void to_left()
{
	for (int i = 79; i >=1; i--)
		{
			for (int j = 1; j <= i; j++)
				{
					printf(" ");
				}
			int y = (rand() % 8+1);
			switch (y)
				{
					case 1:
						system("color 08");
						break;
					case 2:
						system("color 09");
						break;
					case 3:
						system("color 0a");
						break;
					case 4:
						system("color 0b");
						break;
					case 5:
						system("color 0c");
						break;
					case 6:
						system("color 0d");
						break;
					case 7:
						system("color 0e");
						break;
					case 8:
						system("color 0f");
						break;
				}
			printf("_");
			sleep(75);
			system("cls");
		}

}
