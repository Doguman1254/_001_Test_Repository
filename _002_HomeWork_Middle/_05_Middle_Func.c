#include <stdio.h>

/*5. ���� n�� �Է¹ް� n!�� ���ϼ���.(factorial)
   5�� �Է��Ѱ�� 1*2*3*4*5�� ���ϼ���.
   ����Լ� ���̵� ����� Ǯ �� ������, ��Ģ���� ã�ƶ�!
   �ڽ� �ִٸ� ����Լ��ε� Ǯ���. 
   ����Լ��� �����θ� ȣ���ϴ� �Լ��̴�. ���� ��� 0�� ���ѹݺ�����
   ����ϴ� �Լ��� ������ ����.

void stackOverflow(int num) { 
	printf("%d", num);
	return stackOverflow(num);
}*/


int InputPrice(int input)
{
	int sum = 1;

	for (int i = 1; i <= input; i++)
	{
		sum = sum * i;
	}
}

void main() {
	int input;

	printf("���� n�� �Է��ϼ��� >> ");
	scanf_s("%d", &input);

	InputPrice(input);
}