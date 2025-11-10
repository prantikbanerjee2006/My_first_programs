#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void instructions();
void game(int *a);

void main()
{
	system("color 4f");
    srand(time(NULL));
    int inp, f = 0;
    int *pf = &f;
    l1:
    printf("Would you like instructions (1 for Yes, 0 for No): ");
    scanf("%d", &inp);
    if (inp == 1)
        {
            instructions();
        }
    else if (inp == 0)
        {
            game(&f);
        }
    else
        {
            printf("Wrong input! Try again\n");
            goto l1;
        }
    if (f == 1)
        {
            return;
        }
    else
    {
        game(&f);
    }
}

void instructions()
{
    puts("You're trapped in a Ghost Mansion! Go to the top floor quickly to escape this place. But beware, a ghost is chasing you constantly to turn you into their dinner for tonight's party!\n");
}

void game(int *a)
{
    int ghost_pos, user_pos = 0, p_pos = 0, win = 0;
    while (user_pos <= 20)
        {
            ghost_pos = (rand() % 20) + 1;
            printf("\nWhich floor to go: ");
            scanf("%d", &user_pos);
            if (ghost_pos > user_pos)
                {
                    ghost_pos-=2;
                }
            else if (ghost_pos < user_pos)
				{
					ghost_pos+=2;
				}
			else
                {
                    goto l2;
                }
            if (user_pos - p_pos > 2)
                {
                    puts("You can't go that far in one go!");
                }
            else if (ghost_pos == user_pos+1 || ghost_pos == user_pos-1)
                {
                    puts("The ghost is very near you!");
                }
            else if (ghost_pos == user_pos)
                {
                    *a = 1;
                    break;
                }
            else if (user_pos == 21)
                {
                    puts("You can't directly go to the top, must pass all the floors!");
                    user_pos == 0;
                }
            else if (user_pos > 20)
                {
                    puts("Floor doesn't exist!");
                    user_pos == 0;
                }
            else if (user_pos == 20 && ghost_pos != 20)
                {
                    win++;
                    break;
                }
            else
                {
                    puts("You're safe for now!");
                }
            p_pos = user_pos;
        }
    if (win == 1)
        {
            puts("Good job! You escaped the Ghost mansion!");
        }
    else
        {
             l2:
			 puts("Aahh! The ghost captured you, it was on the same floor as you");
             puts("Try agin!");
			 getch();
        }
    *a = 1;
	system("color");
}
