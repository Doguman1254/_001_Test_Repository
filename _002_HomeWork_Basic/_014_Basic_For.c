#include <stdio.h>

// 14. ���� ���� �Է¹ް� �� ����ŭ 3�� ��� ����ϼ���
// ���� ��� 5�� �Է¹����� 3 6 9 12 15�� ����ϸ� �˴ϴ�

void main() {
	int input;

	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	if (input > 0)
	{
		for (int i = 1; i <= input; i++)
		{
			printf("%d\n", 3 * i);
		}
	}
	else {
		printf("���� ������ �Է��ϼ���.");
	}

}