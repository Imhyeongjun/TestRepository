#include <stdio.h>

int main()
{
	int A, B;         // 두 수
	int counter = 0;  // 약수의 개수가 짝수인 수가 검출될때마다 counter++ 하기위한 변수
	int YakCounter = 0; // 약수의 개수를 저장하기 위한 변수
	int i, j;         // for문 돌리기 위한 수

	printf("이 프로그램은 두 정수를 입력받고, 두 수 사이(두 수 포함) 에 약수의 개수가 짝수인 수의 개수를 출력하는 프로그램입니다.\nBy 임형준 \n\n");
	printf("두 정수를 입력하시오 (첫 번째 수가 두 번째 수보다 커야합니다.) : ");
	scanf("%d %d", &A, &B);
	
	for (i = A; A <= i && i <= B; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				YakCounter++;
			}

		}
		if (YakCounter % 2 == 0)
		{
			counter++;
		}
		YakCounter = 0;
	}

	printf("\n\n입력하신 두 수 사이의 (두 수 포함) 약수의 개수가 짝수인 수의 개수는 %d 개 입니다.\n\n", counter);

	return 0;
}