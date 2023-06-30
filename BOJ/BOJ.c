#include <stdio.h>
int main()
{
	int paper[100][100] = { 0 };

	int N;
	scanf("%d", &N);

	int x, y;
	int area = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x);
		scanf("%d", &y);

		for (int xx = x ; xx < x + 10; xx++)
		{
			for (int yy = y; yy < y + 10; yy++)
			{
				if (paper[xx][yy] == 0)
				{
					paper[xx][yy] = 1;
					area++;
				}
			}
		}

	}

	printf("%d", area);

	return 0;

}