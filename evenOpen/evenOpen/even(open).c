#include <stdio.h>

int main()
{
	int A, B;         // �� ��
	int counter = 0;  // ����� ������ ¦���� ���� ����ɶ����� counter++ �ϱ����� ����
	int YakCounter = 0; // ����� ������ �����ϱ� ���� ����
	int i, j;         // for�� ������ ���� ��

	printf("�� ���α׷��� �� ������ �Է¹ް�, �� �� ����(�� �� ����) �� ����� ������ ¦���� ���� ������ ����ϴ� ���α׷��Դϴ�.\nBy ������ \n\n");
	printf("�� ������ �Է��Ͻÿ� (ù ��° ���� �� ��° ������ Ŀ���մϴ�.) : ");
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

	printf("\n\n�Է��Ͻ� �� �� ������ (�� �� ����) ����� ������ ¦���� ���� ������ %d �� �Դϴ�.\n\n", counter);

	return 0;
}