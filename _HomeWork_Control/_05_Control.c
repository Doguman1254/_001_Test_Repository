#include "stdio.h"
/*1�� �Է��ϸ� �������� Ȧ���ܸ� ����ϰ�
   2�� �Է��ϸ� �������� ¦���ܸ� ����ϼ���*/

void main() {
	int num = 0;
here:
	printf("1�� �Է��ϸ� Ȧ����, 2�� �Է��ϸ� ¦������ ����մϴ� >> : ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("1�� : %d  ,3�� : %d  ,5�� : %d  ,7�� : %d  ,9�� : %d\n",
				1 * i, 3 * i, 5 * i, 7 * i, 9 * i);
		}
	}
	else if (num == 2)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("2�� :  %d  ,4�� : %d  ,6�� : %d  ,8�� : %d\n",
				    2 * i, 4 * i, 6 * i, 8 * i);

		}
	}
	else
	{
		printf("���ڸ� �ٽ� �Է��ϼ���.\n");
		goto here;
	}
}