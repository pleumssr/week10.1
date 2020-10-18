#include<stdio.h>
int main()
{
	int x[100][100], i, a, b, j, m, n, f;
	scanf_s("%d %d", &m, &n);
	scanf_s("%d ", &f);
	for (i = 0; i < f; i++)
	{
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		a = a--;
		b = b--;
		if (a >= 0 && a < m && b>=0 && b < n)
		{
			x[a][b] = 8;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (x[i][j] == 8)
			{
				printf("x");
			}
			else printf("_");
		}
		printf("\n");
	}
	return 0;
}