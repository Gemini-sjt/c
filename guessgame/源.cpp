#define _CRT_SECURE_NO_WARNINGS
//每次游戏系统中自动生成一个从1--100的随机数
//玩家每次猜一个数，系统给出相应的提示
//根据提示，猜出最终结果
//游戏可以一直游玩，直到玩家退出
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 0.exit ********\n");
	printf("************************\n");
}
void game()
{
	int random = rand() % 100 + 1;
	printf("choose your number:>");
	int guess = 0;
	while (1)
	{
		scanf("%d", &guess);
		if (random == guess)
		{
			printf("Congratulation，you have guessen the true number\n");
			printf(".\n");
			printf(".\n");
			printf(".\n");
			break;
		}
		else if (random < guess)
		{
			printf("your number is so big\n");
			printf("continue:>");
		}
		else
		{
			printf("your number is so small\n");
			printf("continue:>");
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("choose:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			game();
			break;

			case 0:
			printf("Game Over\n");
			break;

			default:
			printf("choose again:>\n");
			break;
		}
	} while (input);
	return 0;
}