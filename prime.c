#include <stdio.h>
#define N 1000001 // ‰ü—Ç‚PA‰ü—Ç‚U

int main(void)
{
	int i, j, k, c;
	static int a[N];

	for (i = 2; i < N; i++)
	{
		a[i] = 0; // â¿(a)‚Ì‰Šú‰»,‰ü—Ç‚Q
	}

	for (i = 2; i < N / 2; i++)
		if (!a[i])
		{
			j = 2 * i;
			while (j < N)
			{
				a[j] = 1;
				j += i;
			} // i‚Ì”{”‚ğœ‚­
		}

	k = 0;
	c = 0;

	for (i = 2; i < N; i++)
		if (!a[i])
		{
			c++;//‰ü—Ç‚T
			if (i >= N - 1001)//‰ü—Ç‚R
			{
				printf("%7d,", i);
				if (++k % 5 == 0)
					printf("\n"); // ‚TŒÂ‚Å‰üsA‰ü—Ç‚S
			}

		}
	if (k % 5 != 0)
	{
		printf("\n");
	}

	printf("2‚©‚ç100–œ1‚Ü‚Å‚Ì‘f”‚Ì”‚Í%d", c);

	return 0;
}
