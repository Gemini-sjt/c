#define _CRT_SECURE_NO_WARNINGS
//ÿ����Ϸϵͳ���Զ�����һ����1--100�������
//���ÿ�β�һ������ϵͳ������Ӧ����ʾ
//������ʾ���³����ս��
//��Ϸ����һֱ���棬ֱ������˳�
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
			printf("Congratulation��you have guessen the true number\n");
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
		menu();//��ӡ�˵�
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