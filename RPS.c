#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void game(int r);
void instru(int a);

void main()
{
	l1:
	system("color 3f");
	system("cls");
	system("echo off");
	int rounds, inp, inp_1;
	printf("Would you like instructions (1 for Yes, 0 otherwise): ");
	scanf("%d", &inp);
	instru(inp);
	printf("How many rounds you want to play for: ");
	scanf("%d", &rounds);
	game(rounds);
	l2:
	puts("\n\nWant to play again (1 for Yes, 0 otherwise): ");
	scanf("%d", &inp_1);
	if (inp_1 == 1)
		{
			system("cls");
			goto l1;
		}
	else if (inp_1 == 0)
		{
			getch();
		}
	else
		{
			puts("Wrong input! Try again\n");
			goto l2;
		}
}

void instru(int a)
{
	l3:
	if (a == 1)
		{
			puts("It's a classic Rock-Paper-Scissors game.\nEach time you and the computer will give their moves.");
			puts("The valid inputs are: 1, 2 and 3 for Rock, paper and Scissors respectively\n");
		}
	else if (a == 0)
		{
			return;
		}
	else
		{
			puts("Wrong input! Try again\n");
			scanf("%d", &a);
			goto l3;
		}
}

void game(int r)
{
	srand(time(NULL));
	int user_move, user_score = 0, comp_move, comp_score = 0;
	for (int i = 1; i <= r; i++)
		{
			l4:
			comp_move = (rand() % 3 ) + 1;
			printf("\nEnter your move: (1/2/3) ");
			scanf("%d", &user_move);
			if (user_move <= 0 || user_move >= 4)
				{
					puts("\nWrong input! Try again");
					goto l4;
				}
			if (comp_move == user_move)
				{
					puts("\nThe computer played the same as you! Round discarded!\n");
					goto l4;
				}
			if (comp_move == 1 && user_move == 2)
				{
					puts("\nThe computer played: Rock");
					puts("\nYou played: Paper");
					user_score+=1;
					printf("\nYour score: %d \t Computer's score: %d\n", user_score, comp_score);
				}
			if (comp_move == 1 && user_move == 3)
				{
					puts("\nThe computer played: Rock");
					puts("\nYou played: Scissors");
					comp_score+=1;
					printf("\nYour score: %d \t Computer's score: %d\n", user_score, comp_score);
				}
			if (comp_move == 2 && user_move == 1)
				{
					puts("\nThe computer played: Paper");
					puts("\nYou played: Rock");
					comp_score+=1;
					printf("\nYour score: %d \t Computer's score: %d\n", user_score, comp_score);
				}
			if (comp_move == 2 && user_move == 3)
				{
					puts("\nThe computer played: Paper");
					puts("\nYou played: Scissors");
					user_score+=1;
					printf("\nYour score: %d \t Computer's score: %d\n", user_score, comp_score);
				}
			if (comp_move == 3 && user_move == 1)
				{
					puts("\nThe computer played: Scissors");
					puts("\nYou played: Rock");
					user_score+=1;
					printf("\nYour score: %d \t Computer's score: %d\n", user_score, comp_score);
				}
			if (comp_move == 3 && user_move == 2)
				{
					puts("\nThe computer played: Scissors");
					puts("\nYou played: Paper");
					comp_score+=1;
					printf("\nYour score: %d \t Computer's score: %d\n", user_score, comp_score);
				}
		}
	if (user_score > comp_score)
		{
			printf("\nCongratulations! You won! Your score is: %d \t Computer's score is: %d\n", user_score, comp_score);
		}
	else if (user_score < comp_score)
		{
			printf("\nOops! You lost! Your score is: %d \t Computer's score is: %d\n", user_score, comp_score);
		}
		else
			{
				printf("\nIt's a draw! Your score is: %d \t Computer's score is: %d\n", user_score, comp_score);
			}
}