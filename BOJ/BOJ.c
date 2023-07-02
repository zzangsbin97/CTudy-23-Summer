#include <stdio.h>
int main()
{
	long long num;
	long long sum = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%ld", &num);
		sum += num;
	}

	printf("%ld", sum);

	return 0;
}