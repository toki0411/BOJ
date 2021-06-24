#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main(void)
{
	int N, v;
	int sum = 0;
	int average = 0;
	int a[500000] = { 0,};
	scanf("%d", &N);
	if ((N % 2 != 0) && (N >= 1) && (N <= 500000))  //NÀÌ È¦¼öÀÌ¸é
	{
		for (int i = 0; i < N; i++) {
			scanf("%d", &v);
			if (abs(v) <= 4000) {
				a[i] = v;
				sum += v;
			}
		}
		average = sum / N;  
		printf("%d\n", average);
		bubble_sort(a, N);
		int n = N / 2;
		printf("%d\n", a[n]);
		printf("%d\n", a[0]);
		printf("%d\n", a[N] - a[0]);


	}

	getchar(); getchar();
	return 0;
}