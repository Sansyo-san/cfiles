#include <stdio.h>
#define N 1000001 // ���ǂP�A���ǂU

int main(void)
{
	int i, j, k, c;
	static int a[N];

	for (i = 2; i < N; i++)
	{
		a[i] = 0; // �(a)�̏�����,���ǂQ
	}

	for (i = 2; i < N / 2; i++)
		if (!a[i])
		{
			j = 2 * i;
			while (j < N)
			{
				a[j] = 1;
				j += i;
			} // i�̔{��������
		}

	k = 0;
	c = 0;

	for (i = 2; i < N; i++)
		if (!a[i])
		{
			c++;//���ǂT
			if (i >= N - 1001)//���ǂR
			{
				printf("%7d,", i);
				if (++k % 5 == 0)
					printf("\n"); // �T�ŉ��s�A���ǂS
			}

		}
	if (k % 5 != 0)
	{
		printf("\n");
	}

	printf("2����100��1�܂ł̑f���̐���%d", c);

	return 0;
}
