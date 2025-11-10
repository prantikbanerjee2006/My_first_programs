#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void)
{
	int h = 0, m = 0, s = 0;
	printf("Enter current hour, minute and second: ");
	scanf("%d %d %d", &h, &m, &s);
	system("cls");
	for (;;)
	{
		printf("%d : %d : %d \n", h, m, s);
		if (s == 59)
			{
				s = 0;
				if (m == 59)
					{
						m = 0;
						if (h == 23)
							{
								h = 0;
							}
						else
							{
								h+= 1;
							}
					}
				else
					{
						m+=1;
					}
			}
		else
			{
				s+=1;
			}
		sleep(1000);
		system("cls");
		}
		return 0;
}