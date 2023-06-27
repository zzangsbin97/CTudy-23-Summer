﻿#include <stdio.h>
#include <stdlib.h>
void swap(int start, int end, int* index) // 바꾸는 함수
{
	for (; start <= (start + end) / 2; start++)
	{
		int temp = *(index + start - 1);
		*(index + start - 1) = *(index + end - 1);
		*(index + end - 1) = temp;
		end--;

	}
}
int main()
{
	int N; // 숫자 갯수
	int count; // 시행 횟수
	int start, end;

	scanf("%d", &N);
	scanf("%d", &count);
	int* basket = (int*)malloc(sizeof(int) * N);

	for (int i = 1; i <= N ; i++)
		basket[i - 1] = i; 

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &start);
		scanf("%d", &end);
		swap(start, end, basket);
	}

	for (int i = 0; i < N; i++)
		printf("%d ", basket[i]);

	free(basket);

	return 0;

}