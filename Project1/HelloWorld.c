#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int prime = 0;
	int result = 0;
	int num;

	printf("2 이상의 정수를 입력 : ");
	scanf("%d", &num);

	if (num < 2)
	{
		do
		{
			printf("2 이상의 정수를 입력 : ");
			scanf("%d", &num);
		} while (num > 1);
	}

	for (int i = 2; i < num; i++)
	{
		prime = 1;

		for (int j = 2; j * j <= i; j++)
		{
			if (num % j == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime)
		{
			printf("%5d", i);
			result++;
			if (result % 5 == 0)
			{
				print("\n");
			}
		}

	}

	if (result % 5 != 0)
	{
		print("\n");
	}
	
	return	0;
}		